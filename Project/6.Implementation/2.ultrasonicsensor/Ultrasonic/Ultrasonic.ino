#include <LiquidCrystal.h>

//constants for the number of rows and columns in the LCD
//In my example, I use a 20x4 LCD, thus it has 4 rows and 20 columns
//If you use another LCD, type in the appropriate rows and columns below
const int numRows= 4;
const int numCols= 20;
 
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
}
