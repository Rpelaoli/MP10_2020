
/******************************************************************************
**                                                                           **
**                              Morse                                        **
**                                                                           **
**                                                                           **
******************************************************************************/

//****** Includes *************************************************************

//****** Variables ************************************************************
const int pin = 7;   // pin for speaker

int note = 1047;
int velocitat = 10;

//****** Setup ****************************************************************
void setup()
{
}

//****** Loop *****************************************************************
void loop()
{
  //S   ** Exemple SOS **
  punt();
  punt();
  punt();
  //Espai entre lletres
  espaiL();
  //O
  ratlla();
  ratlla();
  ratlla();
  //Espai entre lletres
  espaiL();
  //R
  punt();
  ratlla();
  punt();
  //Espai entre letras
  espaiL();
  //P
  punt();
  ratlla();
  ratlla();
  punt();
  //Espai entre letras
  espaiL();
  //R
  punt();
  ratlla();
  punt();
  //Espai entre letras
  espaiL();
  //E
  punt();
  //Espai entre letras
  espaiL();
  //S  
  punt();
  punt();
  punt();
  //Espai entre letras
  espaiL();
  //A
  punt();
  ratlla();
  //Espai entre paraules
  espaiP();

  //N
  ratlla();
  punt();
  //Espai entre letras
  espaiL();
  //E
  punt();
  //Espai entre letras
  espaiL();
  //N
  ratlla();
  punt();
  //Espai entre letras
  espaiL();
  //G
  ratlla();
  ratlla();
  punt();
  //Espai entre paraules
  espaiP(); 
  
  
}

//****** Funcions *************************************************************
void punt()
{
  tone(pin, note, 1000/velocitat);
  delay(1000/velocitat); 
  delay(1000/velocitat); 
}

void ratlla()
{
  tone(pin, note, 3*(1000/velocitat));
  delay(3*(1000/velocitat)); 
  delay(1000/velocitat);  
}

void espaiL()  //Espai entre lletres
{  
  delay(2*(1000/velocitat));  
}

void espaiP()  //Espai entre paraules
{   
  delay(6*(1000/velocitat));  
}
