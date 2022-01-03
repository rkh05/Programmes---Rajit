char myChar =  'A';
int cypher = 5;
void setup() {
  Serial.begin(115200);
  myChar = myChar + cypher;
  Serial.print(myChar);

}

void loop() {
 
}
