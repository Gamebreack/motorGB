#include <motorGB.h>
motorGB mt1(9,12,10,11);// pinos do motor 1, 2, 3 e 4, 

void setup()
{
  mt1.setspeed(10);// velocidade(por enquanto não é em RPM)
  mt1.setRevolution(50);// número de passos por revolução
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void loop()
{
  ////////////////
  mt1.run_full1(5,0);// número de voltas, direção
  delay(1000);

  mt1.run_full1(5,1);
  delay(1000);

  mt1.doRevolution_full1(0);//direção
  delay(1000);

  mt1.doRevolution_full1(1);  
  delay(1000);
  ////////////////  
}
