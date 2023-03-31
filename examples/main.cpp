#include <Arduino.h>
#include <iostream>

#include <calculate/add/add.hpp>
#include <calculate/sub/sub.hpp>

void setup() {
Serial.begin(115200);
while (!Serial)
;

calculate::Add add;
Serial.print("1 + 1 = ");
Serial.println(add.get(1, 1));

calculate::Sub sub;
Serial.print("1 - 1 = ");
Serial.println(sub.get(1, 1));
}

void loop() {

}
