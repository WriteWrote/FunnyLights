#define redLightPin 1
#define yellowLightPin 2
#define greenLightPin 3

void setup (){

pinMode (redLightPin, OUTPUT);
pinMode (yellowLightPin, OUTPUT);
pinMode (greenLightPin, OUTPUT);

}

void loop (){

digitalWrite(redLightPin, HIGH);
delay (1000);
digitalWrite(redLightPin, LOW);

digitalWrite(yellowLightPin, HIGH);
delay (1000);
digitalWrite(yellowLightPin, LOW);

digitalWrite(greenLightPin, HIGH);
delay (1000);
digitalWrite(greenLightPin, LOW);

digitalWrite(yellowLightPin, HIGH);
delay (1000);
digitalWrite(yellowLightPin, LOW);

}
