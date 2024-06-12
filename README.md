# Real Time Clock (RTC)

#### Project Overview

The Real Time Clock (RTC) project demonstrates how to use an Arduino Nano with an RTC module (DS3231 or DS1307) to keep track of the current date and time. RTC modules are essential for applications that require precise timekeeping, such as data logging, alarm clocks, and time-based automation systems.

#### Components Needed

1. **Arduino Nano**
2. **RTC Module (DS3231 or DS1307)**
3. **Jumper Wires**

#### Block Diagram


#### Circuit Setup

1. **Connect RTC Module to Arduino Nano:**
   - Connect the VCC pin of the RTC module to the 5V pin on the Arduino Nano.
   - Connect the GND pin of the RTC module to the GND pin on the Arduino Nano.
   - Connect the SDA pin of the RTC module to the A4 pin on the Arduino Nano.
   - Connect the SCL pin of the RTC module to the A5 pin on the Arduino Nano.

#### Instructions

1. **Circuit Setup:**
   - Wire the RTC module to the Arduino Nano as described in the circuit setup section.

2. **Code Upload:**
   - Open the Arduino IDE and paste the provided code.
   - Ensure you have the `RTClib` library installed in the Arduino IDE. If not, install it via the Library Manager.
   - Upload the code to the Arduino Nano.

3. **Testing:**
   - Once the code is uploaded, open the serial monitor.
   - The serial monitor will display the current date and time retrieved from the RTC module.

#### Applications

- **Data Logging:** Use RTC modules to timestamp data for logging purposes.
- **Alarm Clocks:** Implement precise timekeeping for creating custom alarm clocks.
- **Time-Based Automation:** Automate tasks based on the current date and time, such as switching lights on/off or triggering events.

#### Notes

- The code sets the RTC to the date and time when the sketch was compiled if the RTC loses power. You can also set the time manually by uncommenting and adjusting the `rtc.adjust()` line in the setup function.
- Ensure the RTC module has a backup battery installed to maintain the time when the main power is off.
- Experiment with different delay values in the code to control the frequency of time updates.

---

🌐 [ProjectsLearner](https://projectslearner.com/learn/arduino-nano-real-time-clock-rtc)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)  

Crafted for you with ❤️ from ProjectsLearner