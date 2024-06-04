 #include <LiquidCrystal.h>
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);
int Gas = 7;
int redLed = 6;
int greenLed = 5;
int speaker = 4;

void setup()
{
  lcd.begin(20, 4);
  lcd.setCursor(0,0);
  lcd.print("Gas Detected :");
  lcd.setCursor(1,2);
  lcd.print("Tim Harniakara");
  lcd.setCursor(4,3);
  lcd.print("E I S");
  pinMode(Gas , INPUT);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(speaker, OUTPUT);
}

void loop()
{
  if(digitalRead(Gas) == HIGH)
{lcd.setCursor(14,0);lcd.print(" Yes");
digitalWrite(redLed, HIGH);
digitalWrite(greenLed, LOW);
digitalWrite(speaker, HIGH);}

  if(digitalRead(Gas) == LOW)
{lcd.setCursor(14,0);lcd.print(" No ");
digitalWrite(redLed, LOW);
digitalWrite(greenLed, HIGH);
digitalWrite(speaker, LOW);}
}