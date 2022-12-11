Void Setup()
{
Serial.begin(9600);
pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
}
Void moveRobot(String motionKey)
{
If(motion == “Forward”)
{
digitalWrite(13,HIGH);
digitalWrite(12,LOW);
digitalWrite(11,HIGH);
digitalWrite(10,LOW);
Serial.println(“Forward”);
}
If(motion == “Backward”)
{
digitalWrite(13,LOW);
digitalWrite(12,HIGH);
digitalWrite(11,LOW);
digitalWrite(10,HIGH);
Serial.println(“Backward”);
}
If(motion == "Right");
{
digitalWrite(13,LOW);
digitalWrite(12,HIGH);
digitalWrite(11,HIGH);
digitalWrite(10,LOW);
Serial.println("Right");
}
If(motion == "Left");
{
digitalWrite(13,HIGH);
digitalWrite(12,LOW);
digitalWrite(11,LOW);
digitalWrite(10,HIGH);
Serial.println("Left");
}
If(motion == "Stop");
{
digitalWrite(13,LOW);
digitalWrite(12,LOW);
digitalWrite(11,LOW);
digitalWrite(10,LOW);
Serial.println("Stop");
}
