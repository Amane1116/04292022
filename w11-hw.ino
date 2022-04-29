//7seg+bottom
byte btn;
byte pins[7]={13, 12, 11, 10, 9, 8, 7};
byte show[16][7]={
  {0,0,0,0,0,0,1},//0
  {1,0,0,1,1,1,1},
  {0,0,1,0,0,1,0},
  {0,0,0,0,1,1,0},
  {1,0,0,1,1,0,0},
  {0,1,0,0,1,0,0},//5
  {1,1,0,0,0,0,0},
  {0,0,0,1,1,1,1},
  {0,0,0,0,0,0,0},
  {0,0,0,1,1,0,0},//9
    
  {0,0,0,1,0,0,0},//A
  {1,1,0,0,0,0,0},//b
  {0,1,1,0,0,0,1},//C
  {1,0,0,0,0,1,0},//d
  {0,1,1,0,0,0,0},//E
  {0,1,1,1,0,0,0},//F
};

void setup()
{
  for (byte i = 0; i < 7; ++i) {
   pinMode(pins[i], OUTPUT); 
  }
  pinMode(btn, INPUT_PULLUP); 
}

void loop()
{
  if(btn==HIGH){
    for (byte i = 7; i < 14; ++i) {
    digitalWrite(i, LOW);
 	}
  }
  else
  {
    for(byte i = 0; i < 16; i++){
    for(byte j = 0; j < 7; j++){
      digitalWrite(pins[j], show[i][j]);
      }
    delay(750);}
  }
}
