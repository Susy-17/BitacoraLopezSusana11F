// C++ code
//
//Librerias
//Instanciar OBJ (objetos)
// Definición de pines
	#define LEDV 12
	#define LEDA 8
	#define LEDR 7
	#define LEDRA 6
	#define LEDRR 11
	#define LEDRV 3
//Declaración de variables
int NotaRandom=0;
//Miguel García 11A-semana 4

void setup()
{//Configuración inicial y asignación de roles (IMP) (OUT)
  Serial.begin(9600);
  pinMode(LEDV,OUTPUT);
  pinMode(LEDA,OUTPUT);
  pinMode(LEDR,OUTPUT);
  Serial.println("El programa se está inicializando");
  
  pinMode(LEDRA, OUTPUT);
  pinMode(LEDRR, OUTPUT);
  pinMode(LEDRV, OUTPUT);
}

void loop()
{// Porgramación del funcionamiento del circuito
digitalWrite(LEDV,HIGH);
digitalWrite(LEDA,HIGH);
digitalWrite(LEDR,HIGH);
delay(2000);
digitalWrite(LEDV,LOW);
digitalWrite(LEDA,LOW);
digitalWrite(LEDR,LOW);
delay(3000);

  
  // Programación de la RGB
  
  //Encender LEDRGB *azul*
  analogWrite(LEDRA,200);
  analogWrite(LEDRV,200);
  analogWrite(LEDRR,100);
  delay(2000);
  //Apagamos LEDRGB
  analogWrite(LEDRA,0);
  analogWrite(LEDRV,0);
  analogWrite(LEDRR,0);
  delay(3000); 
  
    //Encender LEDRGB *rojo*
  analogWrite(LEDRA,100);
  analogWrite(LEDRV,200);
  analogWrite(LEDRR,25);
  delay(1000);
  //Apagamos LEDRGB
  analogWrite(LEDRA,0);
  analogWrite(LEDRV,0);
  analogWrite(LEDRR,0);
  delay(1000); 
  
    //Encender LEDRGB *verde*
  analogWrite(LEDRA,200);
  analogWrite(LEDRV,220);
  analogWrite(LEDRR,30);
  delay(1000);
  //Apagamos LEDRGB
  analogWrite(LEDRA,0);
  analogWrite(LEDRV,0);
  analogWrite(LEDRR,0);
  delay(1000); 
  
}