#include <LiquidCrystal.h>

//constants for the number of rows and columns in the LCD
//In my example, I use a 20x4 LCD, thus it has 4 rows and 20 columns
//If you use another LCD, type in the appropriate rows and columns below
const int numRows= 4;
const int numCols= 20;

//initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{
lcd.begin(numCols, numRows);
lcd.print("Distance measurement meter");
}

void loop()
{
//set the cursor to column 0, line 1
//displays the number of seconds which has elapsed since code is uploaded
lcd.setCursor(0,1);
delay(1000);
lcd.print(millis()/1000);
lcd.print(" seconds elapsed");
}
