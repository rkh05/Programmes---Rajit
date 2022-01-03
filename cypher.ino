String message =  "Message";
int cypher = 5;
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  message = message + cypher;
  Serial.print(message);
}
