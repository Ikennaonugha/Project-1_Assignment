const int TRIG_PIN = 9;
const int ECHO_PIN = 8;

const int RED_LED_PIN = 2;
const int GREEN_LED_PIN = 3;
const int BUZZER_PIN = 4;

const int DISTANCE_THRESHOLD_CM = 50;

long duration;
float distance_cm;

void setup()
{
    // The pinmode set to the type of device connected to each pin
    pinMode(RED_LED_PIN, OUTPUT);
    pinMode(GREEN_LED_PIN, OUTPUT);
    pinMode(BUZZER_PIN, OUTPUT);

    pinMode(TRIG_PIN, OUTPUT);
    pinMode(ECHO_PIN, INPUT);

    Serial.begin(9600);
}

void loop()
{
    // Making sure the trigger pin starts LOW
    digitalWrite(TRIG_PIN, LOW);
    delayMicroseconds(2);

    // Sending a 10-microsecond sound pulse
    digitalWrite(TRIG_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN, LOW);

    // Measuring how long the echo takes to return
    duration = pulseIn(ECHO_PIN, HIGH);

    // Converting the time into distance in cm
    distance_cm = duration * 0.0343 / 2.0;

    // Optional serial monitoring
    Serial.print("Distance: ");
    Serial.print(distance_cm);
    Serial.println(" cm");

    if (distance_cm <= DISTANCE_THRESHOLD_CM) {
        // Space Occupied
        digitalWrite(BUZZER_PIN, HIGH);
        digitalWrite(GREEN_LED_PIN, LOW);
        digitalWrite(RED_LED_PIN, HIGH);
    }
    else {
        // Space Available
        digitalWrite(BUZZER_PIN, LOW);
        digitalWrite(GREEN_LED_PIN, HIGH);
        digitalWrite(RED_LED_PIN, LOW);
    }
    
    delay(200);
}