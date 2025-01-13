#define BUZZER_PIN 3
#define IR_SENSOR_PIN A0
#define TEMP_SENSOR_PIN A1

void setup() {
  pinMode(BUZZER_PIN, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  int irValue = analogRead(IR_SENSOR_PIN);   
  int tempValue = analogRead(TEMP_SENSOR_PIN); 

  
  Serial.print("IR Value: ");
  Serial.println(irValue);
  Serial.print("Temp Value: ");
  Serial.println(tempValue);

  
  int irThreshold = 200;     
  int tempThreshold = 200;   
  
  if (irValue > irThreshold && tempValue > tempThreshold) {
    analogWrite(BUZZER_PIN, 50); 
  } else {
    analogWrite(BUZZER_PIN, 0);  
  }

  delay(1000); }
