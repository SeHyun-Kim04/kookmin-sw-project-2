#define PIN_LED 13
unsigned int count, toggle;
void setup () {
  pinMode (PIN_LED, OUTPUT);
  Serial.begin(115200); // init serial port
  while (!Serial) {
    ; // wait
  }
  Serial.println ("Hello World!");
  count = toggle = 0;
  digitalWrite(PIN_LED, toggle); // turn off LED.
}

void loop() {
  Serial.println(++count);
  toggle = toggle_state(toggle); // toggle LED value.
  digitalWrite (PIN_LED, toggle); // update LED status.
  delay (1000); // wait 1 sec
}

int toggle_state(int toggle) {
  return toggle%2==0;
}
