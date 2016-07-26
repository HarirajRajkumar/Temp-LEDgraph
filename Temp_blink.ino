/* This following program switches ON different LEDs when the temperature is in 
 * the specific range read from LM35 .
 * 
 * LED1 to LED4 represents low to moderate temperature
 * and 
 * LED5 to LED6 represents room temperature to High Temperature
 * 
 */

 //Variable Declaration 
 const byte LED1=2 , LED2=3 , LED3=4 , LED4=5 , LED5=6 ,LED6=7 ,LED7=8 , LED8=9;
 const byte TempPin = A0;


 
 // Function Declaration
 float ReadTemp();
 
 void setup()
 {
 
  pinMode(LED1 ,OUTPUT);
  pinMode(LED2 ,OUTPUT);
  pinMode(LED3 ,OUTPUT);
  pinMode(LED4 ,OUTPUT);
  pinMode(LED5 ,OUTPUT);
  pinMode(LED6 ,OUTPUT);
  pinMode(LED7 ,OUTPUT);
  pinMode(LED8 ,OUTPUT);
  // Setting Input analog pin ( LM35 )
  pinMode(TempPin , INPUT);

  for(byte j=2 ; j<10 ;j++)
  {
    digitalWrite(j , HIGH);
    delay(50);
    digitalWrite(j , LOW);
    delay(50);
  }

  // Setting up Serial monitor at 9600 baud rate
  Serial.begin(9600);
  
  
 }// Close setup


 void loop()
 {
  float Temp = ReadTemp();
  Serial.print(Temp);
  Serial.println(" in *C");

  
   TempLED(Temp);
 }



// Reading Temperature from LM35
float ReadTemp()
{
  float LTemp = (5.0 *  analogRead(TempPin) * 100.0) / 1024;
  return LTemp;
}




void TempLED(float Temp)
{

  if(Temp>=31 && Temp <=32)
  {
     digitalWrite(LED8 , HIGH);
     digitalWrite(LED7 , LOW);
     digitalWrite(LED6 , LOW);
     digitalWrite(LED5 , LOW);
     digitalWrite(LED4 , LOW);
     digitalWrite(LED3 , LOW);
     digitalWrite(LED2 , LOW);
     digitalWrite(LED1 , LOW);
        
    
  }         else if ( Temp>=30 && Temp <=31 )
  {
     digitalWrite(LED8 , LOW);
     digitalWrite(LED7 , HIGH);
     digitalWrite(LED6 , LOW);
     digitalWrite(LED5 , LOW);
     digitalWrite(LED4 , LOW);
     digitalWrite(LED3 , LOW);
     digitalWrite(LED2 , LOW);
     digitalWrite(LED1 , LOW);
  }
        else if ( Temp>=29 && Temp <=30 )
  {
      digitalWrite(LED8 , LOW);
     digitalWrite(LED7 , LOW);
     digitalWrite(LED6 , HIGH);
     digitalWrite(LED5 , LOW);
     digitalWrite(LED4 , LOW);
     digitalWrite(LED3 , LOW);
     digitalWrite(LED2 , LOW);
     digitalWrite(LED1 , LOW);
   }
         else if ( Temp>=28 && Temp <=29)
  {  digitalWrite(LED8 , LOW);
     digitalWrite(LED7 , LOW);
     digitalWrite(LED6 , LOW);
     digitalWrite(LED5 , HIGH);
     digitalWrite(LED4 , LOW);
     digitalWrite(LED3 , LOW);
     digitalWrite(LED2 , LOW);
     digitalWrite(LED1 , LOW);
    }
  
  else if ( Temp>=27 && Temp <=28)
  {  digitalWrite(LED8 , LOW);
     digitalWrite(LED7 , LOW);
     digitalWrite(LED6 , LOW);
     digitalWrite(LED5 , HIGH);
     digitalWrite(LED4 , LOW);
     digitalWrite(LED3 , LOW);
     digitalWrite(LED2 , LOW);
     digitalWrite(LED1 , LOW);
    }
    
  else if ( Temp>=26 && Temp <=27)
  {  digitalWrite(LED8 , LOW);
     digitalWrite(LED7 , LOW);
     digitalWrite(LED6 , LOW);
     digitalWrite(LED5 , LOW);
     digitalWrite(LED4 , HIGH);
     digitalWrite(LED3 , LOW);
     digitalWrite(LED2 , LOW);
     digitalWrite(LED1 , LOW);
    }
    
  else if ( Temp>=25 && Temp <=26)
  {  digitalWrite(LED8 , LOW);
     digitalWrite(LED7 , LOW);
     digitalWrite(LED6 , LOW);
     digitalWrite(LED5 , LOW);
     digitalWrite(LED4 , LOW);
     digitalWrite(LED3 , HIGH);
     digitalWrite(LED2 , LOW);
     digitalWrite(LED1 , LOW);
    }
    
  else if ( Temp>=24 && Temp <=25)
  {  digitalWrite(LED8 , LOW);
     digitalWrite(LED7 , LOW);
     digitalWrite(LED6 , LOW);
     digitalWrite(LED5 , LOW);
     digitalWrite(LED4 , LOW);
     digitalWrite(LED3 , LOW);
     digitalWrite(LED2 , HIGH);
     digitalWrite(LED1 , LOW);
    }
    
  else if ( Temp>=23 && Temp <=24)
  {  digitalWrite(LED8 , LOW);
     digitalWrite(LED7 , LOW);
     digitalWrite(LED6 , LOW);
     digitalWrite(LED5 , LOW);
     digitalWrite(LED4 , LOW);
     digitalWrite(LED3 , LOW);
     digitalWrite(LED2 , LOW);
     digitalWrite(LED1 , HIGH);
    }
 }




