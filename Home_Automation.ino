#include<SoftwareSerial.h>
#include<LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,8,9);

#define TxD 3
#define RxD 2
#define LED_PIN 13
#define PIN_NXT 12
#define PIN_ST 10

SoftwareSerial bluetoothSerial(TxD, RxD);

char c;
int st;

void setup() {
  bluetoothSerial.begin(9600);
  Serial.begin(9600);
  lcd.begin(16,2);
  pinMode(LED_PIN, OUTPUT);
  pinMode(PIN_NXT, OUTPUT);
  pinMode(PIN_ST, INPUT);
  lcd.setCursor(0,0);
  lcd.print("  TEAM XFINITY  ");
 // lcd.print("  suri_kumkaran ");
  lcd.setCursor(0,1);
 // lcd.print("     ROCKS     ");
  lcd.print("    Presents    ");
  delay(3000);
  lcd.setCursor(0,0);
  lcd.print("      Home      ");
  lcd.setCursor(0,1);
  lcd.print("   Automation   ");
  delay(4000);
  lcd.clear();
  }

void loop() {

  lcd.setCursor(0,0);
  lcd.print("    Bluetooth   ");
  lcd.setCursor(0,1);
  st=digitalRead(PIN_ST); //State for detecting Bluetooth is connected or not
  Serial.println(st);
  if(st)
    lcd.print("    Connected   ");
  else
    lcd.print("  Disconnected  ");
    

  if(bluetoothSerial.available()){
    c = bluetoothSerial.read();
   // Serial.println(c);
    if(c=='2'){
      digitalWrite(LED_PIN, HIGH);  //one OFF
    }
    if(c=='1'){
      digitalWrite(LED_PIN, LOW); //one ON
    }
    if(c=='3'){
       digitalWrite(PIN_NXT, LOW); //two ON
    }
     if(c=='4'){
      digitalWrite(PIN_NXT, HIGH);  //two OFF
    }
  }
}
