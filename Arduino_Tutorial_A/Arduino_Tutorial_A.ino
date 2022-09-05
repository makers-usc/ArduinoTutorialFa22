//Assign specific and distinct pins to each component
const int buttonPin = 6;
const int ledPin = 7;
int buttonState = 0;

//This code is only ran once to set up the program
void setup() {
  
  //Set the LED pin to output voltage
  pinMode(ledPin, OUTPUT);

  //Set the Button pin to detect voltage
  pinMode(buttonPin, INPUT);
}

//This code is ran constantly to excute the program repeatedly
void loop() {

  //Read the button voltage
  buttonState = digitalRead(buttonPin);
  
  //When the button is pressed
  if(buttonState == HIGH){
    
    //Turn the LED on
    digitalWrite(ledPin, HIGH);
    
  //When the button is not being pressed
  }else{
    
    //Turn the LED off
    digitalWrite(ledPin, LOW);
  }
}
