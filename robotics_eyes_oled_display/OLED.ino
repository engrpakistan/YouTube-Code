/*
This a code for displaying  Robotics Eyes  on OLED dispaly.Loopaka was used to make a picture for open eye and a close eye.
This will include::
o Arduino Uno
o OLED Display 
o Jumper 
o Arduino Cable
Follow on
Github::https://github.com/engrpakistan?tab=repositories
Instagam::https://www.instagram.com/eng_from_pakistan/
Youtube::https://www.youtube.com/channel/UCsQf9zGTax1Qi_v5OIi3tJQ
Youtube Link for OLED ROBOTIC EYES::https://youtu.be/-AVrTNCcaBg?si=NO40Dw1FHCp-gywQ&t=239
*/
#include <Arduino.h>
#include <U8g2lib.h>
#include <Wire.h>  

U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/U8X8_PIN_NONE);  // initialization for the used OLED display

void setup(void) {
  u8g2.begin();  // start the u8g2 library
u8g2.setBitmapMode(1);
u8g2.setFontMode(1);
u8g2.setFont(u8g2_font_6x10_tr);
u8g2.drawStr(42, 18, "ENGINEER");
u8g2.setFont(u8g2_font_6x10_tr);
u8g2.drawStr(53, 32, "FROM");
u8g2.setFont(u8g2_font_6x10_tr);
u8g2.drawStr(41, 45, "PAKISTAN");
}

void loop(void) {
  int open_speed=1000; //  time for the eyes to remain OPEN 
  int close_speed=300; //  time for the eyes to remian CLOSE
  eye_open();
  delay(open_speed);
  eye_close();  
  delay(close_speed);
  eye_open();
  delay(open_speed);
  eye_close();  
  delay(close_speed);
  eye_open();
  delay(3000);
}
void eye_open() {
  u8g2.clearBuffer();  // clear the internal memory
  u8g2.setBitmapMode(1);
  u8g2.drawBox(14, 13, 36, 36);
  u8g2.drawBox(78, 13, 36, 36);
  u8g2.sendBuffer();
}
void eye_close() {
  u8g2.clearBuffer(); // clear the internal memory
  u8g2.setBitmapMode(1);
  u8g2.drawBox(14, 27, 36, 7);
  u8g2.drawBox(78, 27, 36, 7);
  u8g2.sendBuffer();
}
