//Mux control pins
#define s1 A2
#define s2 A4
#define s3 A6
#define s4 A8

//Mux in "SIG" pin
#define SIG_pin A0

int readMux(byte channel){
  int muxChannell[8][4]={
    {0,0,0,0}, 
    {1,1,0,0},  
    {0,0,1,0}, 
    {1,1,1,0}, 
    {0,0,0,1}, 
    {1,1,0,1}, 
    {0,0,1,1}, 
    {1,1,1,1}  
  };

  int controlPin[4] = {s1, s2, s3, s4};
  for(int i = 0; i < 4; i ++){
    digitalWrite(controlPin[i], muxChannell[channel][i]);
  }
  int val = analogRead(SIG_pin);
  return val;
}