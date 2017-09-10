boolean counter = true;

void setup() {
  pinMode(0, OUTPUT); //FPV
  pinMode(1, OUTPUT); //Spot
  pinMode(2, OUTPUT); //Nav
  pinMode(3, INPUT);  //FPV Switch
  pinMode(4, INPUT);  // Light 3 Pos Switch  // 1000000
}

void loop() {
  if (pulseIn(3, HIGH, 100000000) > 1500)  // FPV
  {
    digitalWrite(0, HIGH); //Night ON
  } else {
    digitalWrite(0, LOW); //Night OFF
  }
  delay(100);
  if (pulseIn(4, HIGH, 10000000) < 1300)   //Light
  {
    digitalWrite(1, LOW); //Spot OFF      // Light SW lower pos
    digitalWrite(2, LOW); //Nav OFF
  } else {
    if (pulseIn(4, HIGH, 10000000) > 1850)
    {
      digitalWrite(1, HIGH); //Spot ON   // Light SW upper pos
      navLights();           //Nav ON
    } else {
      digitalWrite(1, HIGH); //Spot ON  // Light SW mid pos
      digitalWrite(2, LOW); //Nav OFF
    }
  }
  delay(100);
}

void navLights() {
  if (counter) {
    counter = false;
    digitalWrite(2, HIGH);
    delay(50);
    digitalWrite(2, LOW);
    delay(50);
    digitalWrite(2, HIGH);
    delay(50);
    digitalWrite(2, LOW);
    delay(50);
  } else {
    counter = true;
  }
}

