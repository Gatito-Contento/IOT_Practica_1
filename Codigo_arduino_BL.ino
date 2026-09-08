#include <BluetoothSerial.h>

int valor;
BluetoothSerial SerialBT;

const int LED = 2;

void setup() {
  pinMode(LED, OUTPUT);

  Serial.begin(9600);
  SerialBT.begin("ESP32");
}

void loop() {
  // Procesar datos provenientes del Bluetooth
  while (SerialBT.available()) {
    valor = SerialBT.read();

    if (valor == '1') {
      digitalWrite(LED, HIGH);   // Enciende si llega un '1'
    } else {
      digitalWrite(LED, LOW);    // Apaga con cualquier otro carácter ('0', letras, etc.)
    }

    Serial.write(valor);         // Reenvía al Monitor Serial
  }

  // Procesar datos provenientes del Monitor Serial hacia el Bluetooth
  while (Serial.available()) {
    valor = Serial.read();
    SerialBT.write(valor);
  }
}
