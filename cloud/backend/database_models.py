import sqlite3
from datetime import datetime

DB_FILE = "vitals.db"

def init_db():
    conn = sqlite3.connect(DB_FILE)
    c = conn.cursor()
    c.execute('''
        CREATE TABLE IF NOT EXISTS vitals (
            id INTEGER PRIMARY KEY AUTOINCREMENT,
            heart_rate REAL,
            temperature REAL,
            systolic REAL,
            diastolic REAL,
            timestamp TEXT
        )
    ''')
    conn.commit()
    conn.close()

def save_vital_data(data):
    conn = sqlite3.connect(DB_FILE)
    c = conn.cursor()
    c.execute('''
        INSERT INTO vitals (heart_rate, temperature, systolic, diastolic, timestamp)
        VALUES (?, ?, ?, ?, ?)
    ''', (
        data["heart_rate"],
        data["temperature"],
        data["systolic"],
        data["diastolic"],
        data.get("timestamp", datetime.utcnow().isoformat())
    ))
    conn.commit()
    conn.close()

# Initialize DB on import
init_db()
