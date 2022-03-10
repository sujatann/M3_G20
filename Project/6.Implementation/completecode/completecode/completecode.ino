#include <LiquidCrystal.h>
#include <Servo.h>

//constants for the number of rows and columns in the LCD
//In my example, I use a 20x4 LCD, thus it has 4 rows and 20 columns
//If you use another LCD, type in the appropriate rows and columns below
const int numRows= 4;
const int numCols= 20;


Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

 
#define trigger 9
#define echo 10
 
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
 
float time=0,distance=0;
 
void setup()
{
 lcd.begin(numCols, numRows);
lcd.print("Hello there");
 pinMode(trigger,OUTPUT);
 pinMode(echo,INPUT);
 
 myservo.attach(2);  // attaches the servo on pin 2 to the servo object
 
 lcd.setCursor(0,1);
 lcd.print("Distance Meter");
 delay(2000);
 lcd.clear();
 lcd.print(" Circuit Digest");
 delay(2000);
}
 
void loop()
{

  
 lcd.clear();
 digitalWrite(trigger,LOW);
 delayMicroseconds(2);
 digitalWrite(trigger,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigger,LOW);
 delayMicroseconds(2);
 time=pulseIn(echo,HIGH);
 distance=time*340/20000;
 lcd.clear();
 lcd.print("Distance:");
 lcd.print(distance);
 lcd.print("cm");
 lcd.setCursor(0,1);
 lcd.print("Distance:");
 lcd.print(distance/100);
 lcd.print("m");
 delay(1000);

 for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
}
