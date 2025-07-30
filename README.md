# 🚗 Smart Radar-Based Parking & Obstacle Detection System

A real-time scanning radar system using an ultrasonic sensor mounted on a servo motor. The system visualizes obstacle position on screen using the Processing IDE, and includes both LED and buzzer alerts when an object is detected.

## 📌 Features

- Servo-mounted ultrasonic sensor for 180° angular sweep
- Real-time obstacle visualization using Processing (radar-style)
- LED and buzzer alerts for nearby objects
- Adjustable detection threshold

## 🧰 Hardware Components

- Arduino UNO
- Ultrasonic Sensor (HC-SR04)
- Servo Motor (SG90)
- Buzzer
- LED + Resistor (220Ω)
- Jumper wires
- Breadboard
- USB cable

## 💡 How It Works

- Servo rotates ultrasonic sensor from 0° to 180° in steps.
- Sensor detects distance to objects at each angle.
- If object is within 20 cm:
  - 🔔 Buzzer is activated
  - 💡 LED turns ON
- Data is sent to Processing for radar visualization.

## 🧠 Circuit Diagram

![Radar Circuit](images/circuit_diagram.png)

## 💻 Arduino Code

See [`radar_obstacle_alert.ino`](radar_obstacle_alert.ino)

## 🎥 Demo

[Watch Demo](https://your-youtube-link.com)

## 🛠️ Future Enhancements

- LCD/OLED display for standalone use
- Bluetooth interface for mobile radar output
- Adjustable alert threshold from app

## 📜 License

MIT License

## 🙋‍♂️ Author

**Keerthivasan Govindaraju**  
GitHub: [Vasandeveloper](https://github.com/Vasandeveloper)  
LinkedIn: [Keerthivasan's LinkedIn](https://www.linkedin.com/in/keerthivasan-govindaraju-364076319)
