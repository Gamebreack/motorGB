#include "Arduino.h"
#include "motorGB.h"

motorGB::motorGB(int mp1x, int mp2x, int mp3x, int mp4x)
{

 motorGB::_mp1 = mp1x;
 motorGB::_mp2 = mp2x; 
 motorGB::_mp3 = mp3x; 
 motorGB::_mp4 = mp4x; 

pinMode(motorGB::_mp1,1);
pinMode(motorGB::_mp2,1);
pinMode(motorGB::_mp3,1);
pinMode(motorGB::_mp4,1);

}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void motorGB::setspeed(int velocx)
{
  motorGB::_veloc = velocx;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void motorGB::setRevolution(int stepsRevx)
{
  motorGB::_stepsRev = stepsRevx;
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void motorGB::doRevolution_full1(int direcao)
{
  run_full1(motorGB::_stepsRev, direcao);
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void motorGB::doRevolution_full2(int direcao)
{
  run_full2(motorGB::_stepsRev, direcao);
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void motorGB::doRevolution_half(int direcao)
{
  run_half(motorGB::_stepsRev, direcao);
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void motorGB::run_full1(int voltas, int direcao)
{
  for(int voltasx = 0; voltasx < voltas; voltasx++)
  {    
    if(direcao == 1)
    {
      for(int thisStepx = 0;  thisStepx < 4; thisStepx++)
      {
        walk_full1_step(thisStepx);
        delay(motorGB::_veloc);
      }
    }
    else
    {
      for(int thisStepx = 3;  thisStepx > -1; thisStepx--)
      {
        walk_full1_step(thisStepx);    
        delay(motorGB::_veloc);
      }
    }
  }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void motorGB::run_full2(int voltas, int direcao)
{
  for(int voltasx = 0; voltasx < voltas; voltasx++)
  {    
    if(direcao == 1)
    {
      for(int thisStepx = 0;  thisStepx < 4; thisStepx++)
      {
        walk_full2_step(thisStepx);
        delay(motorGB::_veloc);
      }
    }
    else
    {
      for(int thisStepx = 3;  thisStepx > -1; thisStepx--)
      {
        walk_full2_step(thisStepx);    
        delay(motorGB::_veloc);
      }
    }
  }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void motorGB::run_half(int voltas, int direcao)
{
  for(int voltasx = 0; voltasx < voltas; voltasx++)
  {    
    if(direcao == 1)
    {
      for(int thisStepx = 0;  thisStepx < 8; thisStepx++)
      {
        walk_half_step(thisStepx);
        delay(motorGB::_veloc);
      }
    }
    else
    {
      for(int thisStepx = 7;  thisStepx > -1; thisStepx--)
      {
        walk_half_step(thisStepx);    
        delay(motorGB::_veloc);
      }
    }
  }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void motorGB::walk_full1_step(int thisStep)
{
  switch (thisStep) {
  case 0:    // 1000
    digitalWrite(motorGB::_mp1, HIGH);
    digitalWrite(motorGB::_mp2, LOW);
    digitalWrite(motorGB::_mp3, LOW);
    digitalWrite(motorGB::_mp4, LOW);
    break;
  case 1:    // 0100
    digitalWrite(motorGB::_mp1, LOW);
    digitalWrite(motorGB::_mp2, HIGH);
    digitalWrite(motorGB::_mp3, LOW);
    digitalWrite(motorGB::_mp4, LOW);
    break;
  case 2:    //0010
    digitalWrite(motorGB::_mp1, LOW);
    digitalWrite(motorGB::_mp2, LOW);
    digitalWrite(motorGB::_mp3, HIGH);
    digitalWrite(motorGB::_mp4, LOW);
    break;
  case 3:    //0001
    digitalWrite(motorGB::_mp1, LOW);
    digitalWrite(motorGB::_mp2, LOW);
    digitalWrite(motorGB::_mp3, LOW);
    digitalWrite(motorGB::_mp4, HIGH);
    break;
  }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void motorGB::walk_full2_step(int thisStep)
{
  switch (thisStep) {
  case 0:    // 1010
    digitalWrite(motorGB::_mp1, HIGH);
    digitalWrite(motorGB::_mp2, LOW);
    digitalWrite(motorGB::_mp3, HIGH);
    digitalWrite(motorGB::_mp4, LOW);
    break;
  case 1:    // 0110
    digitalWrite(motorGB::_mp1, LOW);
    digitalWrite(motorGB::_mp2, HIGH);
    digitalWrite(motorGB::_mp3, HIGH);
    digitalWrite(motorGB::_mp4, LOW);
    break;
  case 2:    //0101
    digitalWrite(motorGB::_mp1, LOW);
    digitalWrite(motorGB::_mp2, HIGH);
    digitalWrite(motorGB::_mp3, LOW);
    digitalWrite(motorGB::_mp4, HIGH);
    break;
  case 3:    //1001
    digitalWrite(motorGB::_mp1, HIGH);
    digitalWrite(motorGB::_mp2, LOW);
    digitalWrite(motorGB::_mp3, LOW);
    digitalWrite(motorGB::_mp4, HIGH);
    break;
  }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void motorGB::walk_half_step(int thisStep)
{
  switch(thisStep)
  {
  case 0:  //1000
    digitalWrite(motorGB::_mp1, HIGH);
    digitalWrite(motorGB::_mp2, LOW);
    digitalWrite(motorGB::_mp3, LOW);
    digitalWrite(motorGB::_mp4, LOW);
    break;
  case 1:  //1100
    digitalWrite(motorGB::_mp1, HIGH);
    digitalWrite(motorGB::_mp2, HIGH);
    digitalWrite(motorGB::_mp3, LOW);
    digitalWrite(motorGB::_mp4, LOW);
    break;
  case 2:  //0100
    digitalWrite(motorGB::_mp1, LOW);
    digitalWrite(motorGB::_mp2, HIGH);
    digitalWrite(motorGB::_mp3, LOW);
    digitalWrite(motorGB::_mp4, LOW);
    break;
  case 3:  //0110
    digitalWrite(motorGB::_mp1, LOW);
    digitalWrite(motorGB::_mp2, HIGH);
    digitalWrite(motorGB::_mp3, HIGH);
    digitalWrite(motorGB::_mp4, LOW);
    break;
  case 4:  //0010
    digitalWrite(motorGB::_mp1, LOW);
    digitalWrite(motorGB::_mp2, LOW);
    digitalWrite(motorGB::_mp3, HIGH);
    digitalWrite(motorGB::_mp4, LOW);
    break;
  case 5:  //0011
    digitalWrite(motorGB::_mp1, LOW);
    digitalWrite(motorGB::_mp2, LOW);
    digitalWrite(motorGB::_mp3, HIGH);
    digitalWrite(motorGB::_mp4, HIGH);
    break;
  case 6:  //0001
    digitalWrite(motorGB::_mp1, LOW);
    digitalWrite(motorGB::_mp2, LOW);
    digitalWrite(motorGB::_mp3, LOW);
    digitalWrite(motorGB::_mp4, HIGH);
    break;
  case 7:  //1001
    digitalWrite(motorGB::_mp1, HIGH);
    digitalWrite(motorGB::_mp2, LOW);
    digitalWrite(motorGB::_mp3, LOW);
    digitalWrite(motorGB::_mp4, HIGH);
    break;
  }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
