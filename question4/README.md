<img width="615" height="528" alt="image" src="https://github.com/user-attachments/assets/bbaf5cf7-5350-4643-886d-35bbbcb4a061" />

<img width="494" height="461" alt="image" src="https://github.com/user-attachments/assets/4fcdd49a-7700-4c35-b163-cb2110c631e8" />


Component Roles & Data Processing

Ultrasonic Sensor (HC-SR04): Emits ultrasonic sound pulses from its trigger pin and measures the time taken for the echo to return to the receiver.

Arduino Uno: Microcontroller that calculates physical distance using the elapsed duration formula ($\text{Distance} = \frac{\text{Duration} \times 0.0343}{2}$) and evaluates whether the result crosses DISTANCE_THRESHOLD_CM.

LEDs & Buzzer: Visual and audio indicators driven by the digital output pins based on state evaluation.
