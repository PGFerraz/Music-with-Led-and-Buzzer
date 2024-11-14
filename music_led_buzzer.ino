/*

This Arduino program plays the melody of "Twinkle, Twinkle, Little Star" using a buzzer and LEDs. 
Each note in the melody is assigned to a specific LED, which lights up as the corresponding sound plays. 
The buzzer outputs the sound of each note for a short duration, with a pause between them, 
giving the impression of a simple light and sound show synchronized to the song's rhythm. 
The notes C, D, E, F, G, and A have been assigned specific frequencies and are played in sequence to complete the melody.

*/

int led1c = 11; // Creating variables for each LED corresponding to a note
int led2d = 10; // The content of the variable represents the Arduino pin used
int led3e = 9;
int led4f = 8;
int led5g = 7;
int led6a = 6;
int buz = 4; // defining the buzzer pin

float c = 261.63; // Defining each note used and its frequency
float d = 294;
float e = 330;
float f = 349;
float g = 392;
float a = 440;

void setup() {
  pinMode(led1c, OUTPUT); // setting the LED pins as output
  pinMode(led2d, OUTPUT);
  pinMode(led3e, OUTPUT);
  pinMode(led4f, OUTPUT);
  pinMode(led5g, OUTPUT);
  pinMode(led6a, OUTPUT);
  pinMode(buz, OUTPUT); // setting the buzzer pin as output
}

void loop() 
{
  // Part 1: C C G G A A G
  digitalWrite(led1c, HIGH); // Turning on the LED
  tone(buz, c, 200); // activating the buzzer at the frequency of the desired note
  delay(200); // waiting 200 milliseconds to
  digitalWrite(led1c, LOW); // turn off the LED, stopping the buzzer at the same time the LED goes off
  delay(400); // waiting 400 milliseconds for the next note

  digitalWrite(led1c, HIGH);
  tone(buz, c, 200);
  delay(200);
  digitalWrite(led1c, LOW);
  delay(400);

  digitalWrite(led5g, HIGH);
  tone(buz, g, 200);
  delay(200);
  digitalWrite(led5g, LOW);
  delay(400);

  digitalWrite(led5g, HIGH);
  tone(buz, g, 200);
  delay(200);
  digitalWrite(led5g, LOW);
  delay(400);

  digitalWrite(led6a, HIGH);
  tone(buz, a, 200);
  delay(200);
  digitalWrite(led6a, LOW);
  delay(400);

  digitalWrite(led6a, HIGH);
  tone(buz, a, 200);
  delay(200);
  digitalWrite(led6a, LOW);
  delay(400);

  digitalWrite(led5g, HIGH);
  tone(buz, g, 200);
  delay(200);
  digitalWrite(led5g, LOW);
  delay(1000); // 1000 millisecond delay before starting the next part

  // Part 2: F F E E D D C
  digitalWrite(led4f, HIGH);
  tone(buz, f, 200);
  delay(200);
  digitalWrite(led4f, LOW);
  delay(400);

  digitalWrite(led4f, HIGH);
  tone(buz, f, 200);
  delay(200);
  digitalWrite(led4f, LOW);
  delay(400);

  digitalWrite(led3e, HIGH);
  tone(buz, e, 200);
  delay(200);
  digitalWrite(led3e, LOW);
  delay(400);

  digitalWrite(led3e, HIGH);
  tone(buz, e, 200);
  delay(200);
  digitalWrite(led3e, LOW);
  delay(400);

  digitalWrite(led2d, HIGH);
  tone(buz, d, 200);
  delay(200);
  digitalWrite(led2d, LOW);
  delay(400);

  digitalWrite(led2d, HIGH);
  tone(buz, d, 200);
  delay(200);
  digitalWrite(led2d, LOW);
  delay(400);

  digitalWrite(led1c, HIGH);
  tone(buz, c, 200);
  delay(200);
  digitalWrite(led1c, LOW);
  delay(1000);

  // Part 3: G G F F E E D
  digitalWrite(led5g, HIGH);
  tone(buz, g, 200);
  delay(200);
  digitalWrite(led5g, LOW);
  delay(400);

  digitalWrite(led5g, HIGH);
  tone(buz, g, 200);
  delay(200);
  digitalWrite(led5g, LOW);
  delay(400);

  digitalWrite(led4f, HIGH);
  tone(buz, f, 200);
  delay(200);
  digitalWrite(led4f, LOW);
  delay(400);

  digitalWrite(led4f, HIGH);
  tone(buz, f, 200);
  delay(200);
  digitalWrite(led4f, LOW);
  delay(400);

  digitalWrite(led3e, HIGH);
  tone(buz, e, 200);
  delay(200);
  digitalWrite(led3e, LOW);
  delay(400);

  digitalWrite(led3e, HIGH);
  tone(buz, e, 200);
  delay(200);
  digitalWrite(led3e, LOW);
  delay(400);

  digitalWrite(led2d, HIGH);
  tone(buz, d, 200);
  delay(200);
  digitalWrite(led2d, LOW);
  delay(1000);

  // Part 4: G G F F E E D
  digitalWrite(led5g, HIGH);
  tone(buz, g, 200);
  delay(200);
  digitalWrite(led5g, LOW);
  delay(400);

  digitalWrite(led5g, HIGH);
  tone(buz, g, 200);
  delay(200);
  digitalWrite(led5g, LOW);
  delay(400);

  digitalWrite(led4f, HIGH);
  tone(buz, f, 200);
  delay(200);
  digitalWrite(led4f, LOW);
  delay(400);

  digitalWrite(led4f, HIGH);
  tone(buz, f, 200);
  delay(200);
  digitalWrite(led4f, LOW);
  delay(400);

  digitalWrite(led3e, HIGH);
  tone(buz, e, 200);
  delay(200);
  digitalWrite(led3e, LOW);
  delay(400);

  digitalWrite(led3e, HIGH);
  tone(buz, e, 200);
  delay(200);
  digitalWrite(led3e, LOW);
  delay(400);

  digitalWrite(led2d, HIGH);
  tone(buz, d, 200);
  delay(200);
  digitalWrite(led2d, LOW);
  delay(2000);
}
