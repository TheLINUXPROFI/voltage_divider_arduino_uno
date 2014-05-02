// 128 is for me a good number.
// You have to check how many volts is comming from your battery / Lipo
// The Arduino gives numbers instead of the right Voltage so we have to calculate it before we can display it. 
// First we need to know which value represent which value. 
// So simple measure the Voltage and also see what the value is on the screen.
//
// Serial.println(sensorValue);
//
// I become 1024
// 1024 = 12,8 Volts
// 1 Volt = x
// x = 1024 / 12,8 = 80

void setup() {
Serial.begin(9600);
}


void loop() {
int sensorValue = analogRead(A0);
Serial.println(sensorValue/80);
}
