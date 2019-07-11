int soundSensor = 2;
int LED = 3;

void setup(){ 
  
  Serial.begin(9600); // open serial port, set the baud rate to 9600 bps
  pinMode(soundSensor, INPUT);
  pinMode(LED, OUTPUT);
}
void loop(){int val;
      int statusSensor = digitalRead(soundSensor);   //connect mic sensor to Analog 0

      if(statusSensor ==1){
        Serial.print("1");
      }
      else{
        Serial.print("0");
      }
      //Serial.print("Sound=");
      //Serial.println(val,DEC);//print the sound value to serial        
      
}
