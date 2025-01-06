void setup()
{
 Serial.begin(9600);
 delay(5000);
 }
 
void loop(){
  
 String IncomingString="";
 boolean StringReady = false;
 
 while (Serial.available()){
   IncomingString=Serial.readString();
   StringReady= true;
  }
 
  if (StringReady){
    Serial.println("Received String: " + IncomingString);
  }
 }
 
