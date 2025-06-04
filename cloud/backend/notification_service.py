def check_alert_conditions(data):
    """
    Example alert rules. Extend to push/email/SMS using third-party APIs.
    """
    alerts = []

    if data["heart_rate"] < 50 or data["heart_rate"] > 120:
        alerts.append("Abnormal heart rate")

    if data["temperature"] > 38.5:
        alerts.append("High temperature")

    if data["systolic"] > 140 or data["diastolic"] > 90:
        alerts.append("High blood pressure")

    if alerts:
        print("🚨 ALERT:", ", ".join(alerts))
        # send_alert(alerts)  # Future extension
        return True

    return False
