/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int led1 = 5;          // donar nom al pin 5 de l’Arduino
const int led2 = 6;          // donar nom al pin 6 de l’Arduino
const int led4 = 7; 
const int Boto = 4; 
int ON = 0;                      // donar nom al pin 7 de l’Arduino      
unsigned long Temps = 500;

//********** Setup ****************************************************************
void setup()
{
  pinMode(led1, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(Boto, INPUT);     // definir el pin 8 com una sortida
 
}

//********** Loop *****************************************************************
void loop()
{

   

  if(ON = 1)
  {
    delay(Temps);                  // es queden leds 500ms encesos
  
    digitalWrite(led1, HIGH);     // posar a 0V el pin 5
    digitalWrite(led2, LOW);     // posar a 0V el pin 6
    digitalWrite(led4, LOW);     // posar a 0V el pin 7


  
    delay(Temps);                  // es  queden leds 500ms apagats

    digitalWrite(led1, LOW);     // posar a 0V el pin 5
    digitalWrite(led2, HIGH);     // posar a 0V el pin 6
    digitalWrite(led4, LOW);     // posar a 0V el pin 7

    delay(Temps);                  // es  queden leds 500ms apagats

   digitalWrite(led1, HIGH);     // posar a 0V el pin 5
   digitalWrite(led2, HIGH);     // posar a 0V el pin 6
   digitalWrite(led4, LOW);     // posar a 0V el pin 7

   delay(Temps);                  // es  queden leds 500ms apagats

   digitalWrite(led1, LOW);     // posar a 0V el pin 5
   digitalWrite(led2, LOW);     // posar a 0V el pin 6
   digitalWrite(led4, HIGH);     // posar a 0V el pin 7

   delay(Temps);                  // es queden leds 500ms encesos
  
   digitalWrite(led1, HIGH);     // posar a 0V el pin 5
   digitalWrite(led2, LOW);     // posar a 0V el pin 6
   digitalWrite(led4, HIGH);     // posar a 0V el pin 7

  
   delay(Temps);                  // es  queden leds 500ms apagats

  digitalWrite(led1, LOW);     // posar a 0V el pin 5
  digitalWrite(led2, HIGH);     // posar a 0V el pin 6
  digitalWrite(led4, HIGH);     // posar a 0V el pin 7

  delay(Temps);                  // es  queden leds 500ms apagats

  digitalWrite(led1, HIGH);     // posar a 0V el pin 5
  digitalWrite(led2, HIGH);     // posar a 0V el pin 6
  digitalWrite(led4, HIGH);     // posar a 0V el pin 7

   }
   
  else;

  {
    digitalWrite(led1, LOW);     // posar a 0V el pin 5
    digitalWrite(led2, LOW);     // posar a 0V el pin 6
    digitalWrite(led4, LOW);     // posar a 0V el pin 7
  }

  

  


}
 


//********** Funcions *************************************************************
