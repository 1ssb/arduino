#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// LCD setup
LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.clear();

  // Line 0: Name centered
  lcd.setCursor(centerText("Rudra"), 0);
  lcd.print("Rudra");

  // Line 1: Website centered
  lcd.setCursor(centerText("1ssb.github.io"), 1);
  lcd.print("1ssb.github.io");

  // Line 2: Email centered
  lcd.setCursor(centerText("1ssb.rudra@gmail.com"), 2);
  lcd.print("1ssb.rudra@gmail.com");

  // Line 3: Mobile centered
  lcd.setCursor(centerText("M: +61-474224742"), 3);
  lcd.print("M: +61-474224742");
}

void loop() {
  // Nothing to do
}

// Helper function to center text
int centerText(const char* text) {
  int len = strlen(text);
  if (len >= 20) return 0; // No centering needed if too long
  return (20 - len) / 2;
}
