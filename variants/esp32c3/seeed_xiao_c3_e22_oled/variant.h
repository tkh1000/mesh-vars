// Seeed XIAO ESP32-C3 with SSD1306 OLED and EBYTE E22-900T30D (SX1262) LoRa module
// OLED: I2C SDA=GPIO6, SCL=GPIO7
// E22-900T30D: SPI SCK=GPIO8, MISO=GPIO9, MOSI=GPIO10, CS=GPIO3
//              RST=GPIO5, BUSY=GPIO4, DIO1=GPIO20, TXEN=GPIO21, RXEN=GPIO2

#define BUTTON_PIN 9 // Boot button on XIAO ESP32-C3

#define LED_POWER 10 // Built-in LED
#define LED_STATE_ON 1 // State when LED is lit

#define HAS_SCREEN 1
#define HAS_GPS 0
#undef GPS_RX_PIN
#undef GPS_TX_PIN

// OLED display via I2C (SSD1306 128x64)
#define USE_SSD1306
#define I2C_SDA 6
#define I2C_SCL 7

// EBYTE E22-900T30D uses SX1262
#define USE_SX1262
#define LORA_SCK  8
#define LORA_MISO 9
#define LORA_MOSI 10
#define LORA_CS   3
#define LORA_DIO0 RADIOLIB_NC
#define LORA_RESET 5
#define LORA_DIO1 20
#define LORA_DIO2 RADIOLIB_NC
#define LORA_BUSY 4

// E22-900T30D has dedicated TX/RX enable pins (not DIO2 RF switch)
#define SX126X_CS    LORA_CS
#define SX126X_DIO1  LORA_DIO1
#define SX126X_BUSY  LORA_BUSY
#define SX126X_RESET LORA_RESET
#define SX126X_TXEN  21
#define SX126X_RXEN  2
#define SX126X_MAX_POWER 22 // E22-900T30D max output is ~22dBm regulated
