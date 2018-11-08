include <MSP430.h>

int main(void)
{
  WDTCTL = WDTPW | WDTHOLD;
  volatile int a;
  P1DIR = 0x01;
  P1OUT = 0x00;
  for(;;)
  {
    P1OUT ^= 0x01;
    for(a=0; a<=1000; a++);
  }
}
