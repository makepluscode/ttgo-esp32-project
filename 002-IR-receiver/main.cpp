#include <IRremote.h>
#include "SSD1306.h"

IRrecv ir(12);

decode_results results;

SSD1306 display(0x3c, 5, 4);

void initializeLCD() {
    display.init();
    display.setFont(ArialMT_Plain_24);
    display.setTextAlignment(TEXT_ALIGN_LEFT);
}

void updateLCD(String str) {
    display.clear();
    display.drawString(0, 0, str);
    display.display();
}

void setup()
{
  Serial.begin(115200); 
  initializeLCD();

  ir.enableIRIn();
  updateLCD("READY");
}

void loop() {
  char buffer[16];

  if (ir.decode(&results)) {

    memset(buffer, 0x00, sizeof(buffer));
    sprintf(buffer, "0x%x", results.value);
    updateLCD(buffer);

    Serial.println(results.value, HEX);
    ir.resume(); // Receive the next   

    delay(500);  
  }
  delay(100);
}
