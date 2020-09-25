    /*  Arduino DC Motor Control - PWM | H-Bridge | L298N
             Example 02 - Arduino Robot Car Control
        by Dejan Nedelkovski, www.HowToMechatronics.com
    */
   #include <Arduino.h>
  #include <SoftwareSerial.h>
SoftwareSerial HC12(3, 2); // HC-12 TX Pin, HC-12 RX Pin
void setup() {
  Serial.begin(9600);             // Serial port to computer
  HC12.begin(9600);               // Serial port to HC12
}
int i=0;
void loop() {  
  Serial.print(HC12.read());      // Send that data to HC-12  
  i++;
  delay(500);
}