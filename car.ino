char t;
 
void setup() {
pinMode(11,OUTPUT);   //left motors forward
pinMode(12,OUTPUT);   //left motors reverse
pinMode(13,OUTPUT);   //right motors forward
pinMode(10,OUTPUT);   //right motors reverse 
Serial.begin(9600);
} 
 
void loop() {
if(Serial.available()){
  t = Serial.read();
  Serial.println(t);
}
 

  digitalWrite(12,HIGH);
  delay(800);
  digitalWrite(12,LOW);
  delay(100);
  digitalWrite(13,HIGH);
  delay(800);
  digitalWrite(13,LOW);
  delay(100);
  digitalWrite(10,HIGH);
  delay(800);
  digitalWrite(10,LOW);
  delay(100);
  digitalWrite(11,HIGH);
  delay(800);
  digitalWrite(11,LOW);
  delay(100);
  digitalWrite(12, HIGH);
  digitalWrite(10, HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  digitalWrite(10, LOW);
  delay(100);
  digitalWrite(13, HIGH);
  digitalWrite(11, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  digitalWrite(11, LOW);
  delay(100);
}
