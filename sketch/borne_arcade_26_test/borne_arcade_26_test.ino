#define NUM_INPUTS       26 //On définit 26 entrées

int pinNumbers[NUM_INPUTS] = {
  0,1,2,3,4,5,     // tous les ports de 0 à 25 = 26 ports
  6,7,8,9,10,11,       
  12,13,14,15,16,17,   
  18,19,20,21,22,23,24,25,
};

void setup()
{//Début setup
  Serial.begin(9600);  // Lancement de Serial @9600 baud pour lire les valeurs
  //Boucle for  
  for (int i=0; i<NUM_INPUTS; i++)//Pour i=0 et i inférieur strict à NUM_INPUTS on incrémente de 1 à chaque tour 
  {
    pinMode(pinNumbers[i], INPUT);//On définit les pins en entré
  }//Fin boucle for
}//Fin setup

void loop()
{//Début loop
  for (int i=0; i<NUM_INPUTS; i++)//Pour i=0 et i inférieur strict à NUM_INPUTS on incrémente de 1 à chaque tour
  { 
    if (digitalRead(pinNumbers[i]) == LOW)//Si le pin tombe à 0 
    {
      Serial.println(pinNumbers[i]);//on affiche le numéro du pin dans le serial
      delay(100);//on recommence après 100 millisecondes
    }// fin if
  }//fin boucle for
}//Fin loop

