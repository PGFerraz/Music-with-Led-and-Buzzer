LED & Buzzer Melody Project

Overview

This project brings the well-known melody "Twinkle, Twinkle, Little Star" to life on an Arduino, using a buzzer for the sound and LEDs for visual effects. Each LED corresponds to a specific note in the melody, lighting up in sync with the buzzer's sound. This combination of audio and light creates an engaging experience. The project also incorporates 150kΩ resistors to ensure the LEDs are protected from excess current.

Hardware Components

- Arduino Board
- Buzzer: Produces the musical notes for each corresponding LED.
- LEDs (6): Each LED represents a musical note (C, D, E, F, G, A) and lights up as the note is played.
- Resistors (150kΩ)
- Jumper Wires

Software Details

The code is structured as follows:

Variable Initialization: Assigns LEDs to specific Arduino pins and defines the frequencies for each note (C, D, E, F, G, A).

setup() Function: Initializes the pins for LEDs and buzzer as outputs, allowing the Arduino to control them.

loop() Function: The melody is divided into sections. Each note triggers the corresponding LED to light up and plays the assigned frequency on the buzzer. The duration of the tone and LED activation are synchronized with delays to ensure the rhythm is accurate. A 400ms delay between notes mimics natural musical pauses.
