# Ejemplos de Conectividad para ESP32: Wi-Fi y Bluetooth Classic

Este repositorio contiene dos proyectos/ejemplos básicos desarrollados para el microcontrolador **ESP32**, orientados a la gestión de comunicaciones inalámbricas:

1. **Conexión Wi-Fi en modo Estación (STA)**.
2. **Control de periféricos y comunicación bidireccional mediante Bluetooth Classic (SPP)**.

---

## 📌 Contenido del Repositorio

### 1. Conexión Wi-Fi (`Codigo_arduino_wifi.ino`)
Establece la conexión del ESP32 a un punto de acceso (Access Point) utilizando las credenciales configuradas.
- **Características:**
  - Modo de trabajo `WIFI_STA` (Estación).
  - Bucle de espera no bloqueante infinito hasta confirmar la asociación a la red.
  - Muestra del estado de la conexión e impresión de la dirección IP asignada a través del Monitor Serie.

### 2. Control por Bluetooth (`Codigo_arduino_BL.ino`)
Configura el Bluetooth Classic en modo Serial Port Profile (SPP) para recibir comandos desde un dispositivo externo (como un celular o PC) y controlar un LED.
- **Características:**
  - Inicialización del servicio Bluetooth con el nombre de broadcast `"ESP32"`.
  - Control de un LED conectado al puerto `GPIO2` (LED integrado en la mayoría de placas).
  - **Lógica de recepción:** Si se recibe el carácter `'1'`, enciende el LED; con cualquier otro carácter (como `'0'`), lo apaga.
  - **Puente bidireccional (Passthrough):** Redirecciona los datos recibidos por Bluetooth hacia el Monitor Serie y viceversa.

---

## 🚀 Requisitos de Hardware y Software

### Hardware
- Placa de desarrollo **ESP32** (DevKit v1 o similar).
- Cable USB para alimentación y programación.
- Dispositivo móvil o PC con Bluetooth para enviar comandos serie (e.g., app *Serial Bluetooth Terminal* en Android).

### Software
- Arduino IDE (con el soporte para placas ESP32 instalado) o VS Code + PlatformIO.
- Librerías incluidas en el core oficial de ESP32:
  - `<WiFi.h>`
  - `<BluetoothSerial.h>`

---

## ⚙️ Configuración y Uso

### Configuración de Wi-Fi
En el archivo de Wi-Fi, edita las credenciales antes de subir el programa:

```cpp
#define SSID "TU_RED_WIFI"
#define PSWD "TU_CONTRASEÑA"
