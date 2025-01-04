#define BUZZER_PIN 3
#define IR_SENSOR_PIN A0
#define TEMP_SENSOR_PIN A1

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
  // Debugging enabled:
  Serial.begin(9600);
}

void loop() {
  int irValue = analogRead(IR_SENSOR_PIN);   // Read IR sensor
  int tempValue = analogRead(TEMP_SENSOR_PIN); // Read temperature sensor

  // Debugging output:
  Serial.print("IR Value: ");
  Serial.println(irValue);
  Serial.print("Temp Value: ");
  Serial.println(tempValue);

  // Threshold values (adjust based on testing)
  int irThreshold = 200;     // IR detection threshold
  int tempThreshold = 200;   // Temperature detection threshold

  // Trigger buzzer if both conditions are met
  if (irValue > irThreshold && tempValue > tempThreshold) {
    analogWrite(BUZZER_PIN, 50); // Turn on buzzer
  } else {
    analogWrite(BUZZER_PIN, 0);  // Turn off buzzer
  }

  delay(1000); // Delay for stability
}
