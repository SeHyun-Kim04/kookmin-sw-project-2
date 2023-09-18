void setup() {
  pinMode(7,OUTPUT);
}

int count = 0;
bool toggle = 1;

void loop() {
  if(count == 0){
    digitalWrite(7,HIGH);
    delay(1000);
    digitalWrite(7,LOW);
  }
  else if(count < 13){
    digitalWrite(7,toggle);
    toggle = !toggle;
    delay(100);
  }
  else while(1){}
  count++;
}
