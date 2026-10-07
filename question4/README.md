<img width="615" height="528" alt="image" src="https://github.com/user-attachments/assets/bbaf5cf7-5350-4643-886d-35bbbcb4a061" />

```mermaid
graph TD
    Arduino["Arduino Uno"] -- "5V & GND" --> Rails["Breadboard Power Rails"]
    Sensor["HC-SR04 Sensor"] --> Pins["Arduino Pin 9 (Trig) & Pin 8 (Echo)"]
    
    Rails --- Logic
    Pins --- Logic["Decision Logic"]
    
    Logic --> Outputs["Outputs via Breadboard"]
    
    Outputs --> LED_Red["Red LED (Pin 2)"]
    Outputs --> LED_Green["Green LED (Pin 3)"]
    Outputs --> Buzzer["Buzzer (Pin 4)"]
```
