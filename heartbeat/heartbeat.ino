#define LED 13
boolean isOn;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Porgram start");

  pinMode(LED, OUTPUT);
  isOn = false;
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  Serial.println("Heartbeat!");
  digitalWrite(LED, !isOn);
  isOn = !isOn;
}

