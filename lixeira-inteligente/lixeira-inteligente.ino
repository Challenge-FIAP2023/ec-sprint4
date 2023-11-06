#include <ArduinoJson.h>
#include <Servo.h>   // Biblioteca do Servo Motor

Servo servo;     
int trigPin = 5;    
int echoPin = 6;   
int servoPin = 7;
int led = 10;
long duration, dist, average;   
long aver[3];

void setup() {       
  Serial.begin(9600);
  servo.attach(servoPin);  
  pinMode(trigPin, OUTPUT);  
  pinMode(echoPin, INPUT);  
  servo.write(0);         // Inicia com a tampa fechada
  delay(100);
  servo.detach(); 
}

void measure() {  
  digitalWrite(10, HIGH);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(15);
  digitalWrite(trigPin, LOW);
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
  dist = (duration / 2) / 29.1;    // Obtém a distância
}

void loop() {
  for (int i = 0; i <= 2; i++) {   // Verifica a distância
    measure();               
    aver[i] = dist;            
    delay(10);              // Adiciona um atraso às medições
  }
  dist = (aver[0] + aver[1] + aver[2]) / 3;

  // Código JSON começa aqui
  StaticJsonDocument<100> json; // Tamanho do buffer para o JSON
  if (dist <= 200) {
    dist /= 10;
    json["distance"] = dist;
    servo.attach(servoPin);
    delay(1);
    servo.write(0);  
    delay(1000);       
    servo.write(150);    
    delay(1000);
    servo.detach();
    } else {
    dist /= 10;
    json["distance"] = dist;
    servo.attach(servoPin);
    delay(1);
    servo.write(0);  
    delay(1000);       
    servo.detach();
   }
  String jsonString;
  serializeJson(json, jsonString);
  Serial.print(jsonString); // Imprime o JSON
  delay(500);
}
