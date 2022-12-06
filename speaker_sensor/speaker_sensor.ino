void setup() {
Serial.begin(9600);
pinMode(11,OUTPUT);
}
void loop() {

int sensorValue = analogRead(A1);

  if(sensorValue>500 && sensorValue<741)
    {
       //printf("Blinking");
       digitalWrite(11,HIGH);
       delay(500);

    }  
    else
    {
        //printf("Not Blinking");
        digitalWrite(11,LOW);
    }


Serial.println(sensorValue);
delay(1);
}
