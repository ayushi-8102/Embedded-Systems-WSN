// C++ code

//
#define senIn 6
#define senInAna A5
#define senTmp A0
unsigned int senInValue;
unsigned int senInAnaValue;
unsigned int sentempIn;
float tempe=0;
void setup()
{
 pinMode(senIn, INPUT);
 pinMode(senInAna, INPUT);
 pinMode(senTmp,INPUT);
  Serial.begin(115200);
}

void loop()
{
 // senInValue= digitalRead(senIn);
  sentempIn= analogRead(senTmp);
  Serial.print("Temp Sensor analog value= ");
  Serial.println(sentempIn);
  //tempe = sentempIn-20*3.4;
  tempe = map((( sentempIn- 20) * 3.04), 0, 1023, -40, 125);
   Serial.print("Temp in C ="); Serial.println(tempe);  
  // (read analog pin A0 - 20) x 3.04"
  /*senInAnaValue= analogRead(senInAna);
  Serial.print("Sensor Analog Value = ");
  Serial.println(senInAnaValue);*/
 /* if(senInValue > 0){
  	Serial.println("Fall");
  }
  else {
  Serial.println("Ok");}*/
  delay(500);
}