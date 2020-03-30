// ********** Variables ************************************* ***********************

const  int ledA = 4  ;          
const  int ledB = 5 ;          
const  int ledC = 6 ;          
const  int ledD = 7 ;         
const  int ledE = 9 ;         
const  int ledF = 10 ;
const  int ledG = 11 ;
const  int ledH = 12 ;         

// ********** Configuración ************************************* ***************************
void setup ()
{
  pinMode (ledA, OUTPUT);     
  pinMode (ledB, OUTPUT);     
  pinMode (ledC, OUTPUT);     
  pinMode (ledD, OUTPUT);    
  pinMode (ledE, OUTPUT);     
  pinMode (ledF, OUTPUT);
  pinMode (ledG, OUTPUT);
  pinMode (ledH, OUTPUT); 


}

// ********** Loop ************************************* ****************************
void loop ()
{
  digitalWrite (ledA, HIGH);   // R
  digitalWrite (ledB, HIGH);     
  digitalWrite (ledC, HIGH);     
  digitalWrite (ledD, HIGH);     
  digitalWrite (ledE, LOW);
  digitalWrite (ledF, HIGH);    
  digitalWrite (ledG, LOW);   

 delay(1000);

  digitalWrite (ledA, LOW);   // O
  digitalWrite (ledB, LOW);     
  digitalWrite (ledC, LOW);     
  digitalWrite (ledD, LOW);     
  digitalWrite (ledE, LOW);
  digitalWrite (ledF, LOW);    
  digitalWrite (ledG, HIGH);   

 delay(1000);

  digitalWrite (ledA, HIGH);   // D
  digitalWrite (ledB, LOW);     
  digitalWrite (ledC, LOW);     
  digitalWrite (ledD, LOW);     
  digitalWrite (ledE, LOW);
  digitalWrite (ledF, HIGH);    
  digitalWrite (ledG, LOW);
  
 delay(1000);

  digitalWrite (ledA, HIGH);   // R
  digitalWrite (ledB, HIGH);     
  digitalWrite (ledC, HIGH);     
  digitalWrite (ledD, HIGH);     
  digitalWrite (ledE, LOW);
  digitalWrite (ledF, HIGH);    
  digitalWrite (ledG, LOW);   

 delay(1000);

  digitalWrite (ledA, HIGH);   // I
  digitalWrite (ledB, LOW);     
  digitalWrite (ledC, LOW);     
  digitalWrite (ledD, HIGH);     
  digitalWrite (ledE, HIGH);
  digitalWrite (ledF, HIGH);    
  digitalWrite (ledG, HIGH);

 delay(1000);
    
  digitalWrite (ledA, LOW);   // G
  digitalWrite (ledB, LOW);     
  digitalWrite (ledC, LOW);     
  digitalWrite (ledD, LOW);     
  digitalWrite (ledE, HIGH);
  digitalWrite (ledF, LOW);    
  digitalWrite (ledG, LOW);   

 delay(1000);

   digitalWrite (ledA, LOW);   // O
  digitalWrite (ledB, LOW);     
  digitalWrite (ledC, LOW);     
  digitalWrite (ledD, LOW);     
  digitalWrite (ledE, LOW);
  digitalWrite (ledF, LOW);    
  digitalWrite (ledG, HIGH);   

 delay(1000);

 
}
