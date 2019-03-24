#define TRIG 9
#define ECHO 8
#define LED1 2
#define LED2 3
#define LED3 4
#include <Servo.h>

long duration, distance;
Servo servo;

void setup() {
// put your setup code here, to run once:
pinMode(TRIG, OUTPUT);
pinMode(ECHO, INPUT);
Serial.begin(9600);
servo.attach(6);
servo.write(0);
}

void loop() {
// put your main code here, to run repeatedly:
digitalWrite(TRIG, LOW);
delayMicroseconds(2);

digitalWrite(TRIG, HIGH);
delayMicroseconds(10);
digitalWrite(TRIG, LOW);

duration = pulseIn(ECHO, HIGH);
distance = duration/58;
//Serial.println(distance, 10);
Serial.println(distance);

if(distance<25){
Serial.println("PERSON IN ROOM 1");
digitalWrite(LED1, HIGH);
digitalWrite(LED2, HIGH);
digitalWrite(LED3, HIGH);
servo.write(90);
delay(500);
servo.write(0);
delay(500);
}

else if(distance>25){
digitalWrite(LED1, LOW);
digitalWrite(LED2, LOW);
digitalWrite(LED3, LOW);
}


delay(100); 
}
