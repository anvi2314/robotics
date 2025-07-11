int a[8]={2,3,4,5,6,7,8,9};
int i;
# define buttonPin 10
int j;
int count = 0;
int state;
int segment[8][10]={{1,1,1,1,1,1,0,0},
                    {0,1,1,0,0,0,0,0},
                    {1,1,0,1,0,0,1,0},
                    {1,1,1,1,0,0,1,0},
                    {0,1,1,0,0,1,1,0},
                    {1,0,1,1,0,1,1,0},
                    {1,0,1,1,1,1,1,0},
                    {1,1,1,0,0,0,0,0},
                    {1,1,1,0,0,1,1,0},
                    };
                     
void setup() {
 for(i=0;i<8;i++)
 {pinMode(a[i],OUTPUT);
 pinMode(buttonPin,INPUT_PULLUP);}
 
 
 
}
void loop() {
  state =   digitalRead(buttonPin);
 if(state == LOW); //double = checks
 { count++ ;
 delay(100);
 if(count==10)
 {count=0;}} // single = assigns

  for(j=0;j<10;j++) // controlling column
{
  for(i=0;i<8;i++) // controlling row
  
  {digitalWrite(a[i],segment[j][i]);
  }
  delay(1000); //will delay after every number instead of every pin.
}
}
