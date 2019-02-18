/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int ledvermellA = 5;          // donar nom al pin 5 de l’Arduino
const int ledgrocA = 6;          // donar nom al pin 6 de l’Arduino
const int ledverdA = 7;          // donar nom al pin 7 de l’Arduino
const int ledvermellB = 8;          // donar nom al pin 8 de l’Arduino
const int ledgrocB = 9;          // donar nom al pin 9 de l’Arduino
const int ledverdB = 10;         // donar nom al pin 10 de l’Arduino
unsigned long Temps = 1000;

//********** Setup ****************************************************************
void setup()
{
  pinMode(ledvermellA, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(ledgrocA, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(ledverdA, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(ledvermellB, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(ledgrocB, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(ledverdB, OUTPUT);     // definir el pin 10 com una sortida

}

//********** Loop *****************************************************************
void loop()
{


  
  delay(Temps);                  // es queden leds 500ms encesos
  
  digitalWrite(ledvermellA, HIGH);     // posar a 0V el pin 5
  digitalWrite(ledgrocA, LOW);     // posar a 0V el pin 6
  digitalWrite(ledverdA, LOW);     // posar a 0V el pin 7
  digitalWrite(ledvermellB, HIGH);     // posar a 0V el pin 8
  digitalWrite(ledgrocB, LOW);     // posar a 0V el pin 9
  digitalWrite(ledverdB, LOW);     // posar a 0V el pin 10

  
  delay(Temps);                  // es  queden leds 500ms apagats

  digitalWrite(ledvermellA, HIGH);     // posar a 0V el pin 5
  digitalWrite(ledgrocA, LOW);     // posar a 0V el pin 6
  digitalWrite(ledverdA, LOW);     // posar a 0V el pin 7
  digitalWrite(ledvermellB, LOW);     // posar a 0V el pin 8
  digitalWrite(ledgrocB, LOW);     // posar a 0V el pin 9
  digitalWrite(ledverdB, HIGH);     // posar a 0V el pin 10

  delay(Temps*4);                  // es  queden leds 500ms apagats

  digitalWrite(ledvermellA, HIGH);     // posar a 0V el pin 5
  digitalWrite(ledgrocA, LOW);     // posar a 0V el pin 6
  digitalWrite(ledverdA, LOW);     // posar a 0V el pin 7
  digitalWrite(ledvermellB, LOW);     // posar a 0V el pin 8
  digitalWrite(ledgrocB, HIGH);     // posar a 0V el pin 9
  digitalWrite(ledverdB, LOW);     // posar a 0V el pin 10

  delay(Temps);                  // es  queden leds 500ms apagats

  digitalWrite(ledvermellA, HIGH);     // posar a 0V el pin 5
  digitalWrite(ledgrocA, LOW);     // posar a 0V el pin 6
  digitalWrite(ledverdA, LOW);     // posar a 0V el pin 7
  digitalWrite(ledvermellB, HIGH);     // posar a 0V el pin 8
  digitalWrite(ledgrocB, LOW);     // posar a 0V el pin 9
  digitalWrite(ledverdB, LOW);     // posar a 0V el pin 10

  delay(Temps);                  // es queden leds 500ms encesos
  
  digitalWrite(ledvermellA, LOW);     // posar a 0V el pin 5
  digitalWrite(ledgrocA, LOW);     // posar a 0V el pin 6
  digitalWrite(ledverdA, HIGH);     // posar a 0V el pin 7
  digitalWrite(ledvermellB, HIGH);     // posar a 0V el pin 8
  digitalWrite(ledgrocB, LOW);     // posar a 0V el pin 9
  digitalWrite(ledverdB, LOW);     // posar a 0V el pin 10

  
  delay(Temps*4);                  // es  queden leds 500ms apagats

  digitalWrite(ledvermellA, LOW);     // posar a 0V el pin 5
  digitalWrite(ledgrocA, HIGH);     // posar a 0V el pin 6
  digitalWrite(ledverdA, LOW);     // posar a 0V el pin 7
  digitalWrite(ledvermellB, HIGH);     // posar a 0V el pin 8
  digitalWrite(ledgrocB, LOW);     // posar a 0V el pin 9
  digitalWrite(ledverdB, LOW);     // posar a 0V el pin 10

  delay(Temps);                  // es  queden leds 500ms apagats


 


 
}

//********** Funcions *************************************************************
