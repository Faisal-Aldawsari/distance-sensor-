
double  t;
int trig=9;
int ech=8;
double dis;
int sound=7;

void setup() {
  Serial.begin(9600);
  pinMode(trig,OUTPUT);
  pinMode(ech,INPUT);
  pinMode(sound,OUTPUT);
}

void loop() {
  
  digitalWrite(trig,0);
   delayMicroseconds(1);
   digitalWrite(trig,1);
   delayMicroseconds(10);
   digitalWrite(trig,0);
    t=pulseIn(ech,HIGH);
    dis=0.017*t;
    Serial.println(dis);
    delay(200);
    if(dis<8 && dis>0)
    {
      tone(sound,9000,150);
      digitalWrite(13,1);
      delay(200);
      digitalWrite(13,0);
      }
  if(dis<15 && dis>8)
    {
      tone(sound,9000,350);
      digitalWrite(13,1);
      delay(500);
      digitalWrite(13,0);
      }
      
  if(dis<25 && dis>15)
    {
     
      tone(sound,9000,750);
      digitalWrite(13,1);
      delay(1000);
      digitalWrite(13,0);
      }
      
     if(dis<40 && dis>25)
    {
      tone(sound,9000,1000);
      digitalWrite(13,1);
      delay(2000);
      digitalWrite(13,0);
      }

   
    
}
