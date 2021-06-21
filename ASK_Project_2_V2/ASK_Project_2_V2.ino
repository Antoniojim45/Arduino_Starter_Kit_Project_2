/**
 * project 2: spaceship interface 
 * in this project of the spaceship interface there are slight changes to version 1. 
 * This project extends the spaceship interface by making a more complex led pattern. 
 * The following pattern does not stray to far to the original. 
 * @name Antonio Jimenez
 * @Version 2 (7/26/2020)
 */
 // initialize the switch state 
 // (a variable that holds 0/1, reading from the input pin)
int switchState = 0;

/**
 * this is the setup method where we initialize the pins. Here, we assign 
 * 4, 7, and 11 as outputs and 2 as an input. the LED's will connect to the output pins 
 * and the switch will connect to the input pins. 
 */
void setup() {
  // here are the OUTPUT pins
  pinMode(4, OUTPUT);
  pinMode(7,  OUTPUT);
  pinMode(11,  OUTPUT);
  
  // 2 will be the pin the switch is connected to. 
  pinMode(2,  INPUT);
}

/**
 * here is the loop method which repeats the actions you place into it. 
 * we read the state of the switch first then based on what the state of 
 * the switch is, the arduino executes a pattern of the led's
 */
void loop() {
  // the switchState hold the value 0/1 (high or low) 
  switchState = digitalRead(2);

  if(switchState == LOW){
    digitalWrite(4, HIGH);
    digitalWrite(7, LOW);  
    digitalWrite(11, LOW);
  }
  else{
    digitalWrite(4, LOW);
    digitalWrite(7, LOW);
    digitalWrite(11,HIGH);

    delay(2000);
    
    for(int i = 0; i <= 10; i++){
      digitalWrite(4, LOW);
      digitalWrite(7, HIGH);
      digitalWrite(11,LOW);
    
      delay(800);

      digitalWrite(4, LOW);
      digitalWrite(7, LOW);
      digitalWrite(11,LOW);
    
      delay(800);
    }
  }

}
