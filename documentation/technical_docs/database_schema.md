REST API using HTTP GET requests

Response in JSON format

---

### ✅ `documentation/technical_docs/database_schema.md`
```markdown
# Database Schema

## Table: `vital_signs`

| Field         | Type       | Description                  |
|---------------|------------|------------------------------|
| id            | INT (PK)   | Auto-increment ID            |
| device_id     | TEXT       | ESP32 unique identifier      |
| temperature   | FLOAT      | In Celsius                   |
| heart_rate    | INT        | BPM                          |
| systolic      | FLOAT      | mmHg                         |
| diastolic     | FLOAT      | mmHg                         |
| timestamp     | DATETIME   | ISO8601 Timestamp            |

## Indexing

- Indexed on `device_id` and `timestamp` for fast querying.
