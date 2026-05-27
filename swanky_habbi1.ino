// declaração de variavel
byte ledBlue = 2;
byte ledGreen = 3;
byte ledRed = 4;
byte ledYellow = 5;
byte ledOrange = 6;
int potencia = A0;

//inicialização das variáveis
void setup() {
    pinMode(ledBlue, OUTPUT);
      pinMode(ledGreen, OUTPUT);
        pinMode(ledRed, OUTPUT);
          pinMode(ledYellow, OUTPUT);
           pinMode(ledOrange, OUTPUT);
    pinMode(potencia, INPUT);
     Serial.begin(9600);
  
}

//lógica de funcionamento
void loop() {
    potencia = analogRead(A0);
  	Serial.println(potencia);
     
     if (potencia >= 0 && potencia < 205 ) {
      digitalWrite(ledBlue, 1); }    
    
  
  if (potencia >= 205 & potencia < 410) {
      digitalWrite(ledRed, 1);}
       

  if  (potencia >= 205 & potencia < 410) {
        ;digitalWrite(ledGreen, 1);}
  
  

  

      if  (potencia >= 615 & potencia < 820) { 
        ;digitalWrite(ledYellow, 1); }


      if  (potencia >= 820 & potencia < 1023) { 
        digitalWrite(ledOrange, 1);  }
  
     }
       





