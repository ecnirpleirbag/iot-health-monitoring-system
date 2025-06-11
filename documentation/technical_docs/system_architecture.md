
---

### ✅ `documentation/technical_docs/system_architecture.md`
```markdown
# System Architecture

## Overview

The system is composed of:

- **Sensor Layer**: DHT11, MAX30102, ECG module
- **Processing Layer**: ESP32
- **Communication Layer**: WiFi + HTTP POST
- **Storage Layer**: Cloud database (SQL/NoSQL)
- **Presentation Layer**: Mobile App + Web Dashboard

## Data Flow Diagram

```plaintext
[Sensors] --> [ESP32] --WiFi--> [Cloud API] --> [Database] --> [Mobile App]
