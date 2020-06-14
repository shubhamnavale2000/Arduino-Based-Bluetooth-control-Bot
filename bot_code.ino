int fr = 8; 
int br = 10; 
int fl = 9;   
int bl = 11;  
    

void setup()
{
  pinMode(fr, OUTPUT);
  pinMode(fl, OUTPUT);
  pinMode(br, OUTPUT);
  pinMode(br, OUTPUT);
  Serial.begin(9600):
}

void FR()   
{
  digitalWrite(fr, HIGH);
  digitalWrite(br, LOW);
}

void FL()
{
  digitalWrite(fl, HIGH);
  digitalWrite(bl, LOW);
}

void BR()
{
  digitalWrite(br, HIGH);
  digitalWrite(fr, LOW);
}

void BL()   
{
  digitalWrite(bl, HIGH);
  digitalWrite(fl, LOW);
  }

void right()
{
  digitalWrite(fl, HIGH);
  digitalWrite(br, HIGH);
}

void left()
{
  digitalWrite(fr, HIGH);
  digitalWrite(bl, HIGH);
}

void brake()
{
  digitalWrite(fr, LOW);
  digitalWrite(br, LOW);
  digitalWrite(bl, LOW);
  digitalWrite(fl, LOW);
}

void loop()
{
  if(Serial.available())   
  {
   in = Serial.read(); 
   if(bt == 'F')   
   {
    FR();
    FL();  
   }

   else if(bt == 'B')  
   {
    BR();
    BL();
   }

   else if(bt == 'L')  
    left();
   }

   else if(bt == 'R') 
   {
    right();
   }

   else
   {
    brake();
   }
  }
} 
