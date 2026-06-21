
int ledPin=13;
int startValue=5;

 void flashLED(int times){
  int i=times;

  while(i>0){
    digitalWrite(ledPin,1);
    delay(200);
    digitalWrite(ledPin,0);
    delay(200);
    i=i-1;
    }
  }

void setup() {
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);

  Serial.println("===Smart Count Starting===");
  int count=startValue;
  while(startValue>0){
   Serial.print("Count: ");
    Serial.println(startValue);
    flashLED(startValue);
    delay(1000);
    startValue=startValue-1;

  }
 digitalWrite(ledPin,1);
 delay(5000);
 digitalWrite(ledPin,0);
  Serial.println("===Countdown Complete ===");
}

void loop() {
  // put your main code here, to run repeatedly:

}
