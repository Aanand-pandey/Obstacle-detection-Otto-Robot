# 🤖 Obstacle Detection Otto Robot

An Arduino-based autonomous robot that detects and avoids obstacles using ultrasonic sensing and servo-based movement. Inspired by Otto DIY robot design.

---

## 📌 Overview
This project demonstrates a simple yet effective obstacle avoidance system using an Arduino Nano. The robot continuously scans its surroundings using an ultrasonic sensor and changes direction when an obstacle is detected.

---

## 🚀 Features
- Autonomous obstacle detection and avoidance  
- Real-time distance measurement using ultrasonic sensor  
- Servo motor-based directional movement  
- Simple and efficient control logic  
- Compact and low-cost design  

---

## 🧰 Components Used
- Arduino Nano  
- Ultrasonic Sensor (HC-SR04)  
- Servo Motors  
- Jumper Wires  
- Power Supply (Battery)  

---

## ⚙️ Working Principle
1. The ultrasonic sensor sends sound waves and receives the echo.  
2. Arduino calculates the distance to nearby objects.  
3. If an obstacle is detected within a threshold distance:  
   - Robot stops  
   - Changes direction using servo motors  
4. Robot continues moving in a new direction  

---

## 🛠️ Setup Instructions
1. Connect ultrasonic sensor (Trig & Echo pins) to Arduino  
2. Connect servo motors to PWM pins  
3. Upload the Arduino code using Arduino IDE  
4. Power the robot using battery supply  
5. Place robot on flat surface and start  

---

## 💻 Code
```cpp
// Example logic (simplified)
if(distance < 20) {
  stop();
  turnRight();
} else {
  moveForward();
}
