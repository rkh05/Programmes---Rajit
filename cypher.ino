char myChar =  'A';
int cypher = 5;
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  myChar = myChar + cypher;
  Serial.print(myChar);
}
