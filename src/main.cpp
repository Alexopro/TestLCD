#include <Arduino.h>

#include <LiquidCrystal.h> // Добавляем библиотеку экрана
/*               RS, E,D4,D5,D6,D7*/
LiquidCrystal lcd(8, 9, 4, 5, 6, 7); //Указываем пины к которым подключён экран
////////////////////////
#define Symbols 16
#define Lines 2
#define Speed 1000
////////////////////////
void setup()
{                            //обьявляем функцию настроек
  lcd.begin(Symbols, Lines); //Инстализируем экнран
  
}

const char alphabet[52] = {'A', 'a', 'B', 'b', 'C', 'c', 'D', "'d'", 'E', 'e', 'F', 'f', 'G', 'g', 'H', 'h', 'I',
                           'i', 'J', 'j', 'K', 'k', 'L', 'l', 'M', 'm', 'N', 'n', 'O', 'o', 'P', 'p', 'Q', 'q', 'R',
                           'r', 'S', 's', 'T', 't', 'U', 'u', 'V', 'v', 'W', 'w', 'X', 'x', 'Y', 'y', 'Z', 'z'};

void loop()
{
  for (byte i = 0; i < 53; i++)
  {
    for (byte d = 0; d < Lines; d++)
    {
      lcd.setCursor(0, d);
      for (byte h = 0; h < Symbols; h++)
        lcd.print(alphabet[i]);
    }
    delay(Speed);
    lcd.clear();
  }
}
