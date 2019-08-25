// these are the digital pins that out whiskers are connected to
int leftWhisker = 5 ;
int rightWhisker = 7 ;




void setup() {
  // put your setup code here, to run once:
  // opening up our serial port for writing, can't see anything in Monitor if not included
  Serial.begin(9600);

  // pinMode is showing us that the left and right whiskeres are INPUT (not OUTPUT)
  pinMode(leftWhisker, INPUT);
  pinMode(rightWhisker, INPUT);
}



void loop() {
  // put your main code here, to run repeatedly:
  // we use digitalRead() to READ sensing information from our whiskers
  int leftWhiskerValue = digitalRead(leftWhisker);
  int rightWhiskerValue = digitalRead(rightWhisker);


  // print out whisker values to Serial monitor
  Serial.println("LEFT WHISKER VALUE: ");
  Serial.println(leftWhiskerValue);
  Serial.println("RIGHT WHISKER VALUE: ");
  Serial.println(rightWhiskerValue);

  if (leftWhiskerValue == 0 && rightWhiskerValue == 0) {
    Serial.println("Both whiskers are being touched!");
  }
  else if (leftWhiskerValue == 0) {
    Serial.println("Only the left whisker is being touched!");
  }
  else if (rightWhiskerValue == 0) {
    Serial.println("Only the right whisker is being touched!");
  }
  else {
    Serial.println("Nothing is being touched.");
  }

  // delay is here to protect the port buffer from getting overloaded
  delay(500);


}
