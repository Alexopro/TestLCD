#include <Arduino.h>

#include <LiquidCrystal.h>  // Добавляем библиотеку экрана

LiquidCrystal lcd(7, 6, 5, 4, 3, 2); //Указываем пины к которым подключён экран

void setup(){ //обьявляем функцию настроек
  lcd.begin(20, 4);//Инстализируем экнран
}

char alphabet [52]={A, a, B, b, C, c, D, d, E, e, F, f, G, g, H, h, I, i, J,
 j, K, k, L, l, M, m, N, n, O, o, P, p, Q, q, R, r, S, s, T, t, U, u, V,
 v, W, w, X, x, Y, y, Z, z,};

void loop(){
  lcd.setCursor(0, 0);
  lcd.print("AAAAAAAAAAAAAAAAAAA");
  lcd.setCursor(0, 1);
  lcd.print("AAAAAAAAAAAAAAAAAAA");
  lcd.setCursor(0, 2);
  lcd.print("AAAAAAAAAAAAAAAAAAA");
  lcd.setCursor(0, 3);
  lcd.print("AAAAAAAAAAAAAAAAAAA");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("aaaaaaaaaaaaaaaaaaa");
  lcd.setCursor(0, 1);
  lcd.print("aaaaaaaaaaaaaaaaaaa");
  lcd.setCursor(0, 2);
  lcd.print("aaaaaaaaaaaaaaaaaaa");
  lcd.setCursor(0, 3);
  lcd.print("aaaaaaaaaaaaaaaaaaa");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("BBBBBBBBBBBBBBBBBBB");
  lcd.setCursor(0, 1);
  lcd.print("BBBBBBBBBBBBBBBBBBB");
  lcd.setCursor(0, 2);
  lcd.print("BBBBBBBBBBBBBBBBBBB");
  lcd.setCursor(0, 3);
  lcd.print("BBBBBBBBBBBBBBBBBBB");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("bbbbbbbbbbbbbbbbbbb");
  lcd.setCursor(0, 1);
  lcd.print("bbbbbbbbbbbbbbbbbbb");
  lcd.setCursor(0, 2);
  lcd.print("bbbbbbbbbbbbbbbbbbb");
  lcd.setCursor(0, 3);
  lcd.print("bbbbbbbbbbbbbbbbbbb");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("CCCCCCCCCCCCCCCCCCC");
  lcd.setCursor(0, 1);
  lcd.print("CCCCCCCCCCCCCCCCCCC");
  lcd.setCursor(0, 2);
  lcd.print("CCCCCCCCCCCCCCCCCCC");
  lcd.setCursor(0, 3);
  lcd.print("CCCCCCCCCCCCCCCCCCC");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("ccccccccccccccccccc");
  lcd.setCursor(0, 1);
  lcd.print("ccccccccccccccccccc");
  lcd.setCursor(0, 2);
  lcd.print("ccccccccccccccccccc");
  lcd.setCursor(0, 3);
  lcd.print("ccccccccccccccccccc");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("DDDDDDDDDDDDDDDDDDD");
  lcd.setCursor(0, 1);
  lcd.print("DDDDDDDDDDDDDDDDDDD");
  lcd.setCursor(0, 2);
  lcd.print("DDDDDDDDDDDDDDDDDDD");
  lcd.setCursor(0, 3);
  lcd.print("DDDDDDDDDDDDDDDDDDD");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("ddddddddddddddddddd");
  lcd.setCursor(0, 1);
  lcd.print("ddddddddddddddddddd");
  lcd.setCursor(0, 2);
  lcd.print("ddddddddddddddddddd");
  lcd.setCursor(0, 3);
  lcd.print("ddddddddddddddddddd");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("EEEEEEEEEEEEEEEEEEE");
  lcd.setCursor(0, 1);
  lcd.print("EEEEEEEEEEEEEEEEEEE");
  lcd.setCursor(0, 2);
  lcd.print("EEEEEEEEEEEEEEEEEEE");
  lcd.setCursor(0, 3);
  lcd.print("EEEEEEEEEEEEEEEEEEE");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("eeeeeeeeeeeeeeeeeee");
  lcd.setCursor(0, 1);
  lcd.print("eeeeeeeeeeeeeeeeeee");
  lcd.setCursor(0, 2);
  lcd.print("eeeeeeeeeeeeeeeeeee");
  lcd.setCursor(0, 3);
  lcd.print("eeeeeeeeeeeeeeeeeee");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("FFFFFFFFFFFFFFFFFFF");
  lcd.setCursor(0, 1);
  lcd.print("FFFFFFFFFFFFFFFFFFF");
  lcd.setCursor(0, 2);
  lcd.print("FFFFFFFFFFFFFFFFFFF");
  lcd.setCursor(0, 3);
  lcd.print("FFFFFFFFFFFFFFFFFFF");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("fffffffffffffffffff");
  lcd.setCursor(0, 1);
  lcd.print("fffffffffffffffffff");
  lcd.setCursor(0, 2);
  lcd.print("fffffffffffffffffff");
  lcd.setCursor(0, 3);
  lcd.print("fffffffffffffffffff");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("GGGGGGGGGGGGGGGGGGG");
  lcd.setCursor(0, 1);
  lcd.print("GGGGGGGGGGGGGGGGGGG");
  lcd.setCursor(0, 2);
  lcd.print("GGGGGGGGGGGGGGGGGGG");
  lcd.setCursor(0, 3);
  lcd.print("GGGGGGGGGGGGGGGGGGG");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("ggggggggggggggggggg");
  lcd.setCursor(0, 1);
  lcd.print("ggggggggggggggggggg");
  lcd.setCursor(0, 2);
  lcd.print("ggggggggggggggggggg");
  lcd.setCursor(0, 3);
  lcd.print("ggggggggggggggggggg");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("HHHHHHHHHHHHHHHHHHH");
  lcd.setCursor(0, 1);
  lcd.print("HHHHHHHHHHHHHHHHHHH");
  lcd.setCursor(0, 2);
  lcd.print("HHHHHHHHHHHHHHHHHHH");
  lcd.setCursor(0, 3);
  lcd.print("HHHHHHHHHHHHHHHHHHH");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("hhhhhhhhhhhhhhhhhhh");
  lcd.setCursor(0, 1);
  lcd.print("hhhhhhhhhhhhhhhhhhh");
  lcd.setCursor(0, 2);
  lcd.print("hhhhhhhhhhhhhhhhhhh");
  lcd.setCursor(0, 3);
  lcd.print("hhhhhhhhhhhhhhhhhhh");
  delay(5000);
  
  
}

