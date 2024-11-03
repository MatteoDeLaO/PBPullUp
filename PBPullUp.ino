int pushButton = 2;
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
 
  pinMode(pushButton, INPUT_PULLUP);
  pinMode(13, OUTPUT); //will turn pins 11 to 13 to outputs
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}
// the loop routine runs over and over again forever:
void loop() {
  int buttonState = digitalRead(pushButton); // print out the state of the button:
  digitalWrite(13,1); //pins 13,12,11 are on
  digitalWrite(12,1);
  digitalWrite(11,1);
  Serial.println(buttonState); //will read the button state on the serial monitor
  Serial.print("buttonState = "); //will read exactly 'buttonState =' on the serial monitor
  delay(1);  // delay in between reads for stability
}

