int pot1 = 0;


void setup(){
  Serial.begin(9600);
}

void loop(){
  //Lectura de potenciómetros
  pot1 = analogRead(A0);
  

  //Envío de información 
  Serial.print(pot1);
  Serial.print(",");
 

  //esperar 20 ms
  delay(20); 
}
