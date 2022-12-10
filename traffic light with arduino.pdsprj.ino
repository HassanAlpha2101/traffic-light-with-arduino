int pinNumber1 =13;
int pinNumber2 =12;
int pinNumber3 =11;
void setup() {


pinMode(pinNumber1 , OUTPUT);
pinMode(pinNumber2 , OUTPUT);
pinMode(pinNumber3 , OUTPUT);
}

void loop() {
digitalWrite(pinNumber1, HIGH);
delay (500);
digitalWrite(pinNumber1, LOW);
digitalWrite(pinNumber2,HIGH);
delay (100);
digitalWrite(pinNumber2,LOW);
digitalWrite(pinNumber3,HIGH);
delay (500);
digitalWrite(pinNumber3,LOW);
delay (500);
}
