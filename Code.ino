#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <Servo.h>

LiquidCrystal_I2C lcd(0x20, 16, 2); 
Servo katupServo;

const int pinPot    = A0;  
const int pinButton = 2;   
const int pinMotor  = 6;   
const int pinServo  = 9;   
const int pinLed    = 13;  

bool sistemAktif = true;
int statusTombolLama = HIGH;

void setup() {
  lcd.init();
  lcd.backlight();
  katupServo.attach(pinServo);
  
  pinMode(pinButton, INPUT_PULLUP);
  pinMode(pinLed, OUTPUT);
  pinMode(pinMotor, OUTPUT);
  
  katupServo.write(0);
  analogWrite(pinMotor, 0);
  
  lcd.setCursor(0, 0);
  lcd.print("SYSTEM READY...");
  delay(1000);
  lcd.clear();
}

void loop() {
  int statusTombolSekarang = digitalRead(pinButton);
  if (statusTombolSekarang == LOW && statusTombolLama == HIGH) {
    sistemAktif = !sistemAktif;
    lcd.clear();
    delay(250); 
  }
  statusTombolLama = statusTombolSekarang;

  if (sistemAktif) {
    int levelAir = map(analogRead(pinPot), 0, 1023, 0, 100);
    analogWrite(pinMotor, map(levelAir, 0, 100, 0, 255));

    lcd.setCursor(0, 0);
    lcd.print("Water Level:");
    lcd.print(levelAir);
    lcd.print("%   ");

    if (levelAir >= 80) {
      lcd.setCursor(0, 1);
      lcd.print("STATUS: BAHAYA  ");
      digitalWrite(pinLed, HIGH);
      katupServo.write(90);
    } else {
      lcd.setCursor(0, 1);
      lcd.print("STATUS: AMAN    ");
      digitalWrite(pinLed, LOW);
      katupServo.write(0);
    }
  } else {
    lcd.setCursor(0, 0);
    lcd.print("  SISTEM MATI   ");
    lcd.setCursor(0, 1);
    lcd.print("  PRESS BUTTON  ");
    analogWrite(pinMotor, 0);
    digitalWrite(pinLed, LOW);
    katupServo.write(0);
  }
  delay(100);
}