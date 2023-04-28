#include <DHTesp.h>

DHTesp dhtSensor;

void setup() {
  
  Serial.begin(115200);
  Serial.println("Inicializando Sistema");
  dhtSensor.setup(13, DHTesp::DHT22);
  pinMode(22, OUTPUT);
  pinMode(23, OUTPUT);
  Serial.println("Finalizando Sistema");
}

void loop() {

  float temperatura = dhtSensor.getTemperature();
  float humidade = dhtSensor.getHumidity();

  Serial.println("Temperatura :" + String(temperatura) + "C");
  Serial.println("Humidade :" + String(humidade) + "%");
  Serial.println("--------------------------------------------");

  delay(3000); 

  digitalWrite(23, HIGH);
  digitalWrite(23, HIGH);
  delay(1000);

  digitalWrite(23, LOW);
  digitalWrite(23, LOW);
}
