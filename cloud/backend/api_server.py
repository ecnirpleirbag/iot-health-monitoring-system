from flask import Flask, request, jsonify
from data_processing import process_vitals
from database_models import save_vital_data
from notification_service import check_alert_conditions

app = Flask(__name__)

@app.route("/api/v1/submit", methods=["POST"])
def submit_vitals():
    data = request.get_json()

    if not data:
        return jsonify({"error": "No data received"}), 400

    processed = process_vitals(data)
    save_vital_data(processed)

    alert_triggered = check_alert_conditions(processed)
    
    return jsonify({
        "status": "success",
        "alert_triggered": alert_triggered
    })

@app.route("/health", methods=["GET"])
def health_check():
    return jsonify({"status": "API is healthy"}), 200

if __name__ == "__main__":
    app.run(debug=True, host="0.0.0.0", port=5000)
