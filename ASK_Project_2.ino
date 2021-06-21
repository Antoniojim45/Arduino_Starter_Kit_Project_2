/**
 * Project 2: Space ship interface
 * in this project we are making something called a spaceship interface which is when you 
 * press the switch on the breadboard a series of LED's will turn on in a certain pattern. 
 * this project introduces you to inputs and outputs of an arduino. 
 * 
 * @Author Antonio Jimenez
 * @Version 1 (5/2/2020)
 */

int switchState = 0;

/**
 * this is the setup of the program. all it contains is the the setup of the pins.
 * pinMode is a function that takes the pin number and labels it as either an input or output.
 * something that takes in voltage signals or something that gives out voltage signals.
 */
void setup() {
  pinMode(4, OUTPUT);
  pinMode(7,  OUTPUT);
  pinMode(11,  OUTPUT);
  pinMode(2,  INPUT);
}

/**
 * this is the loop section of the program what this does is that it reads the pin input and
 * makes a decision based of the conditional statments if(switchState == LOW) then turn on the 
 * following LEDS that are connected to these pins. else turn on the LED's in this arrangement
 * instead. 
 */
void loop() {
  // this means read the the pin and return if its HIGH or LOW then 
  // place it in switchState
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

    delay(250);  // delay means pause the program for a certain amount of time. 
    
    digitalWrite(4, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(11,LOW);
    
    delay(250);
  }

}
