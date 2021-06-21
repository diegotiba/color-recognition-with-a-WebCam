
char m;
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600); 
 pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    if(Serial.available() ) {
         m=Serial.read();
         if(m=='t'){
            
                     
       digitalWrite(13,HIGH);
       
                }
                 if(m=='u'){

            digitalWrite(13,LOW);
     }
    }
    
   
    


}
