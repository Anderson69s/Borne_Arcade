#define NUM_INPUTS       26

int pinNumbers[NUM_INPUTS] = {
  0,1,2,3,4,5,     // top of makey makey board
  6,7,8,9,10,11,       // left side of female header, KEBYBOARD
  12,13,14,15,16,17,   // right side of female header, MOUSE
  18,19,20,21,22,23,24,25,
};



void setup()
{
  // put your setup code here, to run once:
  for (int i=0; i<NUM_INPUTS; i++) {
    pinMode(pinNumbers[i], INPUT);
    //digitalWrite(pinNumbers[i], HIGH);
  }
  Serial.begin(9600);  // Serial for debugging
}

void loop()
{
  // put your main code here, to run repeatedly:
  for (int i=0; i<NUM_INPUTS; i++) { 
    if (digitalRead(pinNumbers[i]) == LOW) {
      Serial.println(pinNumbers[i]);
      delay(100);
    }
  }
}
