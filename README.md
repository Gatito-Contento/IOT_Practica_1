# ESP32 WiFi Station Connection Example

Este repositorio contiene un ejemplo básico e intuitivo para conectar un microcontrolador **ESP32** a una red Wi-Fi en modo estación (**WIFI_STA**).

## 📌 Descripción

El código inicializa el módulo Wi-Fi del ESP32, se conecta a un punto de acceso (Access Point) utilizando las credenciales proporcionadas y muestra el estado de la conexión a través del Monitor Serie (UART). Una vez establecida la conexión con éxito, imprime la dirección IP asignada localmente.

## 🚀 Requisitos

- **Hardware:**
  - Placa de desarrollo ESP32.
  - Cable USB para programación y comunicación serie.
- **Software / Entorno:**
  - Arduino IDE (con el core de ESP32 instalado) o VS Code con PlatformIO.

## ⚙️ Configuración

Antes de subir el código a tu placa, actualiza las macros con las credenciales de tu red Wi-Fi:

```cpp
#define SSID "TU_NOMBRE_DE_RED"
#define PSWD "TU_CONTRASEÑA"
