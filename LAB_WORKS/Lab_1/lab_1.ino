// Sensor pins
#define sensorPower 7
#define sensorPin A0

int val = 0;

void setup() {
  Serial.begin(9600);              
  pinMode(sensorPower, OUTPUT);   
  digitalWrite(sensorPower, LOW);  
}

void loop() {
  digitalWrite(sensorPower, HIGH); 
  delay(10);                      
  val = analogRead(sensorPin);   
  digitalWrite(sensorPower, LOW);  

  Serial.println(val);             
  delay(1000);                     
}
