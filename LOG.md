# Desk Cube Build Log

## Day 1 — Setup
Parts verified: Nano ESP32 powers up, display cable fits, LED strip
has 60 LEDs with connector attached, INMP441 pins soldered.
Found the 470uF cap and set it aside for day 13.

Repo created and cloned to X9 Pro SSD.

Decided: cube is 75mm, display at ~58% height on the front face.

Open question: will the 40.8 x 30.6mm active area look too small
inside a 75mm face? Check on the test print before committing.
## Day 2 — IDE and first upload
Arduino IDE installed, sketchbook pointed at the X9.
First DFU upload failed through the USB hub. Plugging direct into the Mac
fixed it — uploads need a direct connection.
PSRAM check: YES, 8386295 bytes. Free heap 356440.
Variables: int truncates decimals, 7/2 gives 3, bools print as 1/0.

## Day 4 — Loops
for loop: init, condition, increment. i < count is correct;
i <= count runs one extra time and would overrun an array.
Nested loops build the bar graph — outer walks bins, inner draws characters.
Changed the /3 divisor and watched the bars scale.
Serial Monitor was blank after upload — pressing RESET re-runs setup().
Better fix: while (!Serial) waits for the connection.

## Day 5 — Functions
Functions live outside setup() and loop().
void = does something. int = returns a number, sent with return.
Parameters in the brackets pass values in.
Rewrote the bar graph with printBinLabel() and printBar() — the main loop
now reads like a description instead of a wall of code.

