int a[8][3]={{0,0,0},
        {0,0,1},
        {0,1,0},
        {0,1,1},
        {1,0,0},
        {1,0,1},
        {1,1,0},
        {1,1,1}};
int i,j,m=0;

void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
}

void loop() {
while(m<8)
{ j=0;
  for(i=2;i<5;i++)
  {
    digitalWrite(i,a[m][j]);
    j++;
  }
  delay(1000);
  m++;

}
}
