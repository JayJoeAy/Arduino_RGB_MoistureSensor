int redPin=7;
int greenPin=6;
int bluePin=5;
void PinBlink(int PinNo);
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redPin,OUTPUT);
pinMode(greenPin,OUTPUT);
pinMode(bluePin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int hRaw=analogRead(A0);
  int hReal=map(hRaw,1023,0,0,100);
  Serial.println(hReal);
  delay(100);
  if (hReal > 50)
  {
    digitalWrite(redPin,HIGH);
    digitalWrite(bluePin,HIGH);
    PinBlink(greenPin);
  }else {
    digitalWrite(greenPin,HIGH);
    digitalWrite(bluePin,HIGH);
    PinBlink(redPin);
    }
}
void PinBlink(int PinNo)
{
    digitalWrite(PinNo,HIGH);
    delay(2000);
    digitalWrite(PinNo,LOW);
    delay(2000);
}


