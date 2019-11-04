const int ledPin0 = 9;
const int ledPin1 = 10;
const int ledPin2 = 11;

const int potPin0 = A0;
const int potPin1 = A1;
const int potPin2 = A2;
int pot0Value = 0, pot1Value = 0, pot2Value = 0;
int led0Value = 0, led1Value = 0, led2Value = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin0, OUTPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  float voltage;
  // put your main code here, to run repeatedly:
 
  pot0Value = analogRead(potPin0);
  pot1Value = analogRead(potPin1);
  pot2Value = analogRead(potPin2);
  led0Value = map(pot0Value, 0, 1023, 0, 255);
  led1Value = map(pot1Value, 0, 1023, 0, 255);
  led2Value = map(pot2Value, 0, 1023, 0, 255);
  analogWrite(ledPin0, led0Value);
  analogWrite(ledPin1, led1Value);
  analogWrite(ledPin2, led2Value);
  /*Serial.println(potValue); */
  delay(1);
}
