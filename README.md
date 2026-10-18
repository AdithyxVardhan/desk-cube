# Desk Cube

An ESP32-based desk companion I'm building from scratch to learn embedded
systems end to end — one subsystem per interface, no library doing the
work for me.

## Hardware
- Arduino Nano ESP32 (ESP32-S3, 8 MB PSRAM)
- Waveshare 2" LCD, ST7789 driver, 320×240, over SPI
- Breadboard, pre-soldered modules

## Status
**Working:** C++ fundamentals through non-blocking `millis()` scheduling
(sketches 06–16). Toolchain configured including PSRAM and USB CDC.

**In progress:** Display bring-up. The sketch flashes clean and the
backlight lights, which confirms the supply rail and ground — so the
fault is in the data path or the driver config. Currently isolating
across the five remaining signal lines.

**Planned:** audio-reactive visualiser (I²S + FFT), addressable lighting,
phone control over WiFi, 3D-printed enclosure.

## Layout
Numbered folders are sequential learning sketches. `LOG.md` is the daily
build log — what I did, what broke, what I worked out.
