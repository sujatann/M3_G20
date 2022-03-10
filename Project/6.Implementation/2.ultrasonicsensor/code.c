#include <LiquidCrystal.h>

//constants for the number of rows and columns in the LCD
//In my example, I use a 20x4 LCD, thus it has 4 rows and 20 columns
//If you use another LCD, type in the appropriate rows and columns below
const int numRows= 4;
const int numCols= 20;
#define echoPin  10 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPin 9 //attach pin D3 Arduino to pin Trig of HC-SR04

// defines variables
long duration; // variable for the duration of sound wave travel
int distance; // variable for the distance measurement



//initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
lcd.begin(numCols, numRows);
lcd.print("Distance measurement meter");
pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin, INPUT); // Sets the echoPin as an INPUT
  Serial.begin(9600); // // Serial Communication is starting with 9600 of baudrate speed
  Serial.println("Ultrasonic Sensor HC-SR04 Test"); // print some text in Serial Monitor
  Serial.println("with Arduino UNO R3");
}

void loop()
{
//set the cursor to column 0, line 1
//displays the number of seconds which has elapsed since code is uploaded
lcd.setCursor(0,1);
delay(1000);
lcd.print(millis()/1000);
lcd.print(" seconds elapsed");
// Clears the trigPin condition
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the distance
  distance = duration * 0.034 / 2; // Speed of sound wave divided by 2 (go and back)
  // Displays the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");
}