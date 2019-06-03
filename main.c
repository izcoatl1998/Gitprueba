#include <main.h>
#include <stdio.h>
#use delay(clock=16M)
void main()
{
 int8 lectura;
 //hola
   /*
     Esto va a ser un cambio*/
   while(TRUE)
   {
   setup_adc_ports(AN0);
   setup_adc(ADC_CLOCK_INTERNAL);
   set_adc_channel(0);
   //asd
   lectura=read_adc();
   output_B(lectura);
   //x
   //y
   //agregue mas jaja
   }
}
