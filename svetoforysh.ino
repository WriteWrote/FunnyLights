#define redLightPin 7
#define yellowLightPin 6
#define greenLightPin 5

#define buttonPin 2

volatile bool button = LOW;


void changingLight() {
  
  digitalWrite(redLightPin, HIGH);
  delay (3000);
  digitalWrite(redLightPin, LOW);

  digitalWrite(yellowLightPin, HIGH);
  delay (3000);
  digitalWrite(yellowLightPin, LOW);

  digitalWrite(greenLightPin, HIGH);
  delay (3000);
  digitalWrite(greenLightPin, LOW);

}

void stopLight()
{timer_handle_interrupts(3);
}

void timer_handle_interrupts(int timer){
  
  digitalWrite(redLightPin, LOW);
  digitalWrite(yellowLightPin, LOW);
  digitalWrite(greenLightPin, LOW);
  
  changingLight();
  
  }
 

void setup () {
  
  Serial.begin(9600);

  pinMode (redLightPin, OUTPUT);
  pinMode (yellowLightPin, OUTPUT);
  pinMode (greenLightPin, OUTPUT);

  pinMode (buttonPin, INPUT_PULLUP);

  attachInterrupt (0, stopLight,FALLING);
}

void loop () {
  changingLight();
  }












  
