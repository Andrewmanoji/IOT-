

void setup() {

  Serial.begin(9600);
  
  // put your setup code here, to run once:

}

void loop() {
  int a = analogRead(A0);
  Serial.println(analogRead(A0));
  delay(1000);
  // put your main code here, to run repeatedly:

}
