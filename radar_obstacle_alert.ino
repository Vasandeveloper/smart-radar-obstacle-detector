#include <Servo.h>

const int trigPin = 9;
const int echoPin = 10;
const int ledPin = 6;
const int buzzerPin = 7;

Servo myServo;

long duration;
int distance;
int angle;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  myServo.attach(11);
  Serial.begin(9600);
}

void loop() {
  for (angle = 0; angle <= 180; angle += 1) {
    myServo.write(angle);
    delay(20);
    distance = getDistance();

    if (distance > 0 && distance <= 20) {
      digitalWrite(ledPin, HIGH);
      digitalWrite(buzzerPin, HIGH);
    } else {
      digitalWrite(ledPin, LOW);
      digitalWrite(buzzerPin, LOW);
    }

    Serial.print(angle);
    Serial.print(",");
    Serial.println(distance);
  }

  for (angle = 180; angle >= 0; angle -= 1) {
    myServo.write(angle);
    delay(20);
    distance = getDistance();

    if (distance > 0 && distance <= 20) {
      digitalWrite(ledPin, HIGH);
      digitalWrite(buzzerPin, HIGH);
    } else {
      digitalWrite(ledPin, LOW);
      digitalWrite(buzzerPin, LOW);
    }

    Serial.print(angle);
    Serial.print(",");
    Serial.println(distance);
  }
}

int getDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  return duration * 0.034 / 2;
}
