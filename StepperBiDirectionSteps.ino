const int stepPin=5;//PULL PIN

const int dirPin=3;

const  int enPin=8;

float numstep=200 , i=0;
int x=0;

int finalStep=0 ,fs=0,rs=0;
void setup(){
    Serial.begin(9600);
    pinMode(stepPin,OUTPUT);
    pinMode(dirPin,OUTPUT);
    pinMode(enPin,OUTPUT);

    digitalWrite(enPin,LOW);
    digitalWrite(dirPin,HIGH);

      pinMode(6,INPUT);
}

void loop(){
    if(10>1){
        for(int x=0 ;x<numstep; x++){

         x =digitalRead(6);
        //Serial.println(x);
        if(x==1){
        
         digitalWrite(dirPin,HIGH);
        
        }
            if(x==0){
        
         digitalWrite(dirPin,LOW);
        
        }


        digitalWrite(stepPin,LOW);
        delayMicroseconds(400); 
      
        if(x==1){
          
          fs=fs+1;
         // Serial.println("FORWORD---->");
          //Serial.print(fs);
         //delay(1000);
          }
           if(x==0){
          rs=rs+1;
         // Serial.println("REVERSE------>");
         // Serial.print(rs);
          //delay(1000);
          
          }
         finalStep=fs-rs;
        //Serial.println("finalStep------>");
        //Serial.print(finalStep);

        digitalWrite(stepPin,HIGH);
        delayMicroseconds(400);


        i++;

    }
}
}
