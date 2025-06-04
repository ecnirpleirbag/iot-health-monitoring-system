def process_vitals(data):
    """
    Cleans and converts raw vitals data into structured format.
    Example: Converts strings to float, applies filtering, etc.
    """
    try:
        return {
            "heart_rate": float(data.get("heart_rate", 0)),
            "temperature": float(data.get("temperature", 0)),
            "systolic": float(data.get("systolic", 0)),
            "diastolic": float(data.get("diastolic", 0)),
            "timestamp": data.get("timestamp")
        }
    except (ValueError, TypeError) as e:
        raise ValueError("Invalid input format") from e
