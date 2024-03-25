const int n_led = 5;
const int led_pin[n_led] = {11, 10, 9, 6, 5};
int value = 0;
int pin = 0;

void setup() {
  for (int i = 0; i < n_led; i++) {
    pinMode(led_pin[i], OUTPUT);
  }
}

void loop() {
  
  value = analogRead(pin);
  
  value /=4;
  
  for (int i = 0; i < n_led; i++) {
    digitalWrite(led_pin[i], value);
  }
  
}