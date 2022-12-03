// AR RoboTics
//https://www.youtube.com/@ARRoboTics

#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = " j1tFfkABvUURNBaALfoD7PFvlfwYMUCW";
char ssid[] = "AR RoboTics";
char pass[] = "********";

void setup() {
  pinMode (D1, OUTPUT);
   pinMode (D2, OUTPUT);
   pinMode (D3, OUTPUT);
   pinMode (D4, OUTPUT);
   pinMode (D7, OUTPUT);
   pinMode (D8, OUTPUT);
 
  Blynk.begin(auth,ssid,pass);
  
}

void loop() {
  Blynk.run();// put your main code here, to run repeatedly:

}
