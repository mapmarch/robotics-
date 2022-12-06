void setup() {
Serial.begin(9600);
pinMode(13,OUTPUT);
}
void loop() {

int sensorValue = analogRead(A1);

  if(sensorValue>500 && sensorValue<741)
    {
       //printf("Blinking");
       digitalWrite(13,HIGH);
       delay(500);

    }  
    else
    {
        //printf("Not Blinking");
        digitalWrite(13,LOW);
    }


Serial.println(sensorValue);
delay(1);
}
