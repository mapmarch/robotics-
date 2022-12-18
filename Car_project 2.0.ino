



void setup()

{

  pinMode(10, OUTPUT);

  pinMode(10, OUTPUT);

  pinMode(11, OUTPUT);

  pinMode(13, OUTPUT);

  Serial.begin(9600);

}

void loop()

{

  while(Serial.available())

  {

    char In=Serial.read();

    

    if(In=='w' || In=='W')            // Forward

    {

      digitalWrite(10, LOW);

      digitalWrite(11, HIGH);

      digitalWrite(12, LOW);

      digitalWrite(13, HIGH);

      Serial.println("Forward");
    }

    

     else if(In=='s' || In=='S')            //backward

    {

      digitalWrite(10, LOW);

      digitalWrite(11, HIGH);

      digitalWrite(12, LOW);

      digitalWrite(13, HIGH);

      Serial.println("Backward");
    }

    

     else if(In=='a' || In=='A')     // Left

    {

      digitalWrite(10, HIGH);

      digitalWrite(11, LOW);

      digitalWrite(12, LOW);

      digitalWrite(13, LOW);

      Serial.println("Left");
    }

    

     else if(In=='d' || In=='D')     // Right

    {

      digitalWrite(10, LOW);

      digitalWrite(11, LOW);

      digitalWrite(12, HIGH);

      digitalWrite(13, LOW);

      Serial.println("Right");
    }

    

     else if(In==' ' || In==' ')    // stop

    {

      digitalWrite(10, LOW);

      digitalWrite(11, LOW);

      digitalWrite(12, LOW);

      digitalWrite(13, LOW);
Serial.println("Stop");

    }

    

    else

    {

      

    }

  }

}
