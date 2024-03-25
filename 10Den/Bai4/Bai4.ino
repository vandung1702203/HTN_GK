const int n_led = 10;
const int led_pin[n_led] = {13, 12, 11, 10, 9, 8 ,7 , 6, 5, 4};
int value = 0;
int pin = 0;

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < n_led; i++) {
    pinMode(led_pin[i], OUTPUT);
  }
}

void loop() {
  
  value = analogRead(pin);
  Serial.println(value);

  value /=4;
  
  for (int i = 0; i < n_led; i++) {
    digitalWrite(led_pin[i], HIGH);
    delay(value);
  }

  for (int i = 0; i < n_led; i++) {
    digitalWrite(led_pin[i], LOW);
  }

  delay(200);
}