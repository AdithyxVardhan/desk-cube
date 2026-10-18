// Waveshare 2inch LCD, ST7789V, on Arduino Nano ESP32

#define USER_SETUP_INFO "Waveshare 2inch Nano ESP32"

#define ST7789_DRIVER

#define TFT_WIDTH  240
#define TFT_HEIGHT 320

#define TFT_MOSI 11
#define TFT_SCLK 13
#define TFT_CS   10
#define TFT_DC    9
#define TFT_RST   8
#define TFT_BL    7

#define TFT_BACKLIGHT_ON HIGH

#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_GFXFF
#define SMOOTH_FONT

#define SPI_FREQUENCY  10000000
#define SPI_READ_FREQUENCY  6000000
