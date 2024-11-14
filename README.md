LED & Buzzer Melody Project

Overview

This project recreates the classic melody "Twinkle, Twinkle, Little Star" on an Arduino using a buzzer and a series of LEDs, where each LED corresponds to a note in the melody. As the buzzer plays each note, the respective LED lights up, creating a synchronized audio-visual experience. This project is ideal for beginners looking to explore Arduino's capabilities in combining sound with light patterns. The implementation includes the use of resistors with a value of 150kΩ to protect the LEDs from excessive current.

Hardware Components

Arduino Board: Acts as the main controller, generating sound frequencies for the buzzer and managing the LED light-up sequences.
Buzzer: Produces the musical notes corresponding to each LED.
LEDs (6): Each LED corresponds to a different musical note (C, D, E, F, G, and A) and lights up when the corresponding note plays.
Resistors (150kΩ): Used in series with each LED to limit current, preventing damage to the LEDs.
Jumper Wires: Used to make connections between components on the breadboard and the Arduino.
Software Details
The code for this project is structured in the following manner:

Variable Initialization:

LEDs are assigned to specific Arduino pins.
Frequencies for each musical note (C, D, E, F, G, A) are defined as float variables, matching real musical frequencies.
setup() Function:

Configures the LED and buzzer pins as output, allowing the Arduino to control each component.
loop() Function:

The melody of "Twinkle, Twinkle, Little Star" is broken into sections (or "parts").
For each note, the corresponding LED lights up, and the buzzer plays the assigned frequency. The tone duration and LED activation are synchronized with a delay for rhythmic accuracy.
Following each note, there is a 400ms delay to create spacing between notes, simulating the natural pause in music.
How It Works
When the Arduino starts, it runs the setup() function once to initialize the output pins. The loop() function then repeatedly cycles through the melody. Each LED lights up in synchronization with the note played by the buzzer, creating a visual representation of each note in the song. The program continues to loop the melody until the Arduino is powered off or reset.

Circuit Diagram
Connect each LED to a unique Arduino pin.
Attach each LED to a 150kΩ resistor, connected in series to the ground rail.
Connect the buzzer's positive pin to the designated Arduino pin, with the negative pin grounded.
Use jumper wires to complete connections and place all components on a breadboard for stability.
This project showcases Arduino’s ability to integrate audio and visual elements, making it an engaging demonstration of simple electronics and programming.
