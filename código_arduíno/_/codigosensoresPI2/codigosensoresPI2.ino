#include <Ultrasonic.h>

#include "Ultrasonic.h"

int trigger = 12;
int echo = 13;


HC_SR04 sensor(trigger, echo);

const int PINO_SENSOR_TEMPERATURA = A0;


float temperaturaCelsius;

void setup() {
    Serial.begin(9600);
}

void loop() {

long distancia = sensor.distance();

int valorLeitura = analogRead(PINO_SENSOR_TEMPERATURA);
temperaturaCelsius = (valorLeitura * 5.0 / 1023.0) / 0.01;

	Serial.print("Distância: ");
	Serial.print(distancia);
	Serial.println(" cm");
	

	Serial.print("Temperatura: ");
	Serial.print(temperaturaCelsius);
	Serial.println(" C");




delay(2000);

}