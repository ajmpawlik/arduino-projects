/* Arduino Blink project - the second attempt.
The inbuilt led blinks with:
 - 100 miliseconds of light and 500 miliseconds of no light.
 - 100 miliseconds of light and 500 miliseconds of no light.
 - 500 miliseconds of light and 500 miliseconds of no light.
 - 1000 miliseconds of light and 500 miliseconds of no light.
 - 2000 miliseconds of light and 500 miliseconds of no light.
 - 300 miliseconds of light and 500 miliseconds of no light.
The blinks create a looping pattern. A "quick" doble-blink starts the loop. 
  */


void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(100);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(2000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(3000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}
