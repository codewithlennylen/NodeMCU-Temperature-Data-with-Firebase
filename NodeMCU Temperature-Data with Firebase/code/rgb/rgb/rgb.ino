byte red_led = D8;
byte green_led = D7;
byte blue_led = D3;



void setup() {
  // put your setup code here, to run once:
  pinMode(red_led, OUTPUT);
  pinMode(green_led, OUTPUT);
  pinMode(blue_led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(blue_led, LOW);
  digitalWrite(red_led, HIGH);
  delay(1000);
  digitalWrite(red_led, LOW);
  digitalWrite(green_led, HIGH);
  delay(1000);
  digitalWrite(green_led, LOW);
  digitalWrite(blue_led, HIGH);
  delay(1000);

}
