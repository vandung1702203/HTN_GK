const int n_led = 10;
const int led_pin[n_led] = {11, 10, 9, 8, 7, 6, 5, 4, 3, 2};

void setup() {
  for (int i = 0; i < n_led; i++) {
    pinMode(led_pin[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < n_led; i=i+2) {
    digitalWrite(led_pin[i], HIGH);
    delay(200);
  }
  
  for (int i = n_led-1; i >= 0; i=i-2) {
    digitalWrite(led_pin[i], HIGH);
    delay(200);
  }

  for (int i = n_led-1; i >= 0; i--) {
    digitalWrite(led_pin[i], LOW);
  }

  delay(200);

}