/*
    Project name : Real time clock RTC
    Modified Date: 12-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-real-time-clock-rtc
*/

#include <Wire.h>
#include <RTClib.h>

RTC_DS3231 rtc; // Create an instance of the RTC (DS3231 or DS1307)

void setup() {
  Serial.begin(9600); // Initialize serial communication
  Wire.begin(); // Initialize I2C communication

  if (!rtc.begin()) { // Check if the RTC is connected
    Serial.println("Couldn't find RTC");
    while (1);
  }

  if (rtc.lostPower()) {
    Serial.println("RTC lost power, let's set the time!");
    // If the RTC lost power, set the time to a specific date and time
    // This line sets the RTC to the date & time this sketch was compiled
    rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
    // Alternatively, you can set the date and time manually
    // rtc.adjust(DateTime(2024, 6, 11, 12, 0, 0)); // Year, Month, Day, Hour, Minute, Second
  }
}

void loop() {
  DateTime now = rtc.now(); // Get the current date and time from the RTC

  Serial.print(now.year(), DEC);
  Serial.print('/');
  Serial.print(now.month(), DEC);
  Serial.print('/');
  Serial.print(now.day(), DEC);
  Serial.print(" ");
  Serial.print(now.hour(), DEC);
  Serial.print(':');
  Serial.print(now.minute(), DEC);
  Serial.print(':');
  Serial.print(now.second(), DEC);
  Serial.println();

  delay(1000); // Wait for 1 second before printing again
}
