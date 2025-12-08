//@author: Gabe Silsby
//@date: 12/7/25
//@purpose: make a 5-digit passkey that can be entered be user and blink a green LED when valid; if not valid blink red LED

#include <Keypad.h>

int ledRed = 2; //define red LED position on breadboard for Arduino pin 2
int ledGreen = 4; //define green LED position on breadboard for Arduino pin 4

int failDelay = 3000; // both led's blink for 3 seconds 
int successDelay = 3000;

//define ROWS & COLS for 2D array (4x4 grid)
const byte ROWS = 4; 
const byte COLS = 4;

// this array  stores 6 char values with the correct
// passcode being 5 integers + '#'
char  keyPadEntries[6];   

//lots of char variables
char keys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'}, 
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

//assign the ROWS and COLS to pin locations
byte rowPins[ROWS] = {13, 12, 11, 10}; 
byte colPins[COLS] = {9, 8, 7, 6};

//fixed variable name
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

//define initial key presses = 0
int keyPressCount = 0; 

//function that returns no value
//turns the LED pins into outputs so they can flash
void setup()
{
  Serial.begin(9600);
 
  pinMode(ledRed, OUTPUT); 
  pinMode(ledGreen, OUTPUT);
}

void loop()
{
  char key = keypad.getKey();
  
  if (key){
    //saves to array 
    keyPadEntries[keyPressCount] = key; 
    keyPressCount++;
    
    //prints to terminal
    Serial.print("Key pressed:");
    Serial.println(key); 

    // turn passcode as one string from char entries so that line 68 works; 
    String entriesList = "";
    for(int i=0; i<keyPressCount; i++){
      entriesList = entriesList + keyPadEntries[i]; //builds the full password as a string
    }
    
    //checks key validity
    if(entriesList == "67067#"){ //correct password
      Serial.println("Correct Password Entered!");
      digitalWrite(ledGreen,HIGH); //turns on green LED 
      delay(successDelay); // on for 3 seconds (3000 ms)
      digitalWrite(ledGreen,LOW); //turns off green LED
      keyPressCount = 0; //reset key presses = 0
    }
    else if(key == '#'){ 
      Serial.println("Invalid Password Entered! Please try again.");
      digitalWrite(ledRed,HIGH); //turns on red LED
      delay(failDelay); //on for 3000 ms (3 seconds)
      digitalWrite(ledRed,LOW); //turns off red LED 
      keyPressCount = 0; //reset key pressed to 0
    }

  }
}
