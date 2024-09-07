#include<NewPing.h>

#define TRIGGER_PIN 13
#define ECHO_PIN 12
#define MAX_DISTANCE 200
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE);
int ir1 = A0;
int ir2 = A1;
int pin = 4;
int count = 0, l, r;
unsigned long value = 0;
void setup()
{
    Serial.begin(9600);
    pinMode(ir1, INPUT);
    pinMode(ir2, INPUT);
    pinMode(pin, INPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
}
void forward()
{
    digitalWrite(5, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
}

void right()
{
    digitalWrite(5, LOW);
    digitalWrite(8, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
}

void left()
{
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
}

void stopp()
{
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
}


long st = millis(), endt;
int flag = 0;

void loop()
{

    if (Serial.read() == 'F' || flag == 1)
    {
        if (digitalRead(pin) > 0)
        {
            value = pulseIn(pin, HIGH);
            Serial.print("Value=");
            Serial.println(value);
            if (value > 1500 && value < 2000)
            {
                Serial.println("Gantry 1 Crossed");
                stopp();
                delay(1000);
            }
            if (value > 2500 && value < 3000)
            {
                Serial.println("Gantry 2 Crossed");
                stopp();
                delay(1000);
            }
            if (value > 500 && value < 1000)
            {
                Serial.println("Gantry 3 Crossed");
                stopp();
                delay(1000);
            }
        }
        flag = 1;
        int dist = sonar.ping_cm();
        Serial.print("distance:");
        Serial.println(dist);
        if (dist < 10 && dist > 0)
        {
            Serial.println("obstacle detected");
            stopp();
        }
        else{
        l = digitalRead(ir1);
        r = digitalRead(ir2);

        if (l == 1 && r == 1){
            forward();}
        if (l == 0 && r == 1){
            left();}
        if (l == 1 && r == 0){
            right();}
        if (l == 0 && r == 0)
        {
            endt = millis();
            if (endt - st > 1000)
            {
                count++;
                st = millis();

            }
            if (count == 1)
            {
                forward();
                Serial.print("forward :");
                Serial.println(count);
            }
            if (count == 2)
            {
                left();
                Serial.print("left :");
                Serial.println(count);
            }
            if (count == 3)
            {
                forward();
                Serial.print("forward :");
                Serial.println(count);
            }
            // if (count == 4)
            // {
            //     forward();
            //     // left();
            //     Serial.print("forward :");
            //     Serial.println(count);
            // }
            if (count == 4)
            {
                left();
                Serial.print(count);
                Serial.println("left");
                delay(1250);
            }
            if (count == 5)
            {
                forward();
                Serial.print("forward:");
                Serial.print(count);

            }
            if (count > 5)
            {
                stopp();
                Serial.print("stop");
                flag = 0;
            }
        }
      }
    }
}
