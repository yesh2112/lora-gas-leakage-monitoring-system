# Design of a Wireless Cyber-Physical System for Gas Leak Detection Using LoRa Technology.

## 1. Project Overview

This project presents an IoT-based wireless gas leakage detection and environmental monitoring system using ESP32 and LoRa communication technology.

The system detects gas concentration and monitors temperature and humidity. Sensor readings are transmitted wirelessly to a gateway and forwarded to a cloud-based monitoring platform for real-time visualization and alerts.

## 2. System Architecture

MQ-2 Gas Sensor + DHT11 Sensor  
↓  
ESP32 Sensor Node  
↓  
SX1278 LoRa Transmitter  
↓  
SX1278 LoRa Receiver  
↓  
ESP32 Gateway  
↓  
Wi-Fi and MQTT (HiveMQ Cloud)  
↓  
Node-RED  
↓  
InfluxDB  
↓  
Grafana Dashboard

## 3. Hardware Components

- ESP32 Development Boards
- SX1278 LoRa Modules (433 MHz)
- MQ-2 Gas Sensor
- DHT11 Temperature and Humidity Sensor
- 18650 Lithium-ion Batteries
- Antennas and connecting wires

## 4. Software and Technologies

- Embedded C / Arduino IDE
- ESP32
- LoRa Wireless Communication
- MQTT Protocol
- HiveMQ Cloud
- Node-RED
- InfluxDB 2.x
- Grafana

## 5. Key Features

- Wireless gas leakage detection.
- Temperature and humidity monitoring.
- Long-range communication using LoRa.
- Cloud-based sensor data monitoring.
- Real-time dashboard visualization.
- Email notifications for abnormal gas levels.

## 6. Project Documentation

[View Complete Project Report (PDF)](LoRa_Based_Wireless_Gas_Leakage_Detection_and_Monitoring_System.pdf)

## 7. Project Outcome

Successfully developed and tested a wireless gas monitoring prototype integrating sensor interfacing, LoRa communication, MQTT-based data transmission and cloud dashboard visualization.

## 8. Author

**BEERAM YESWANTH REDDY**– Team Lead

**MEKAPOGU VINAY** – Team Member

**JINKA VENKATA SAI CHARAN**– Team Member

## 9. Project Guide

 **Mr. N .VINOD KUMAR**

## 10. Acknowledgement

We sincerely thank our project guide and department faculty for their guidance and support throughout the development of this project.
Electronics and Communication Engineering Graduate

GitHub: https://github.com/yesh2112
