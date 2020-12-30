#include <stdio.h>

/* print farenheit-Celsius table
   from 0 to 300 degrees, with 20 step */

int main(){

  float fahr, celsius;
  int lower,upper,step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr=lower;
  while (fahr <= upper){
    celsius = (5.0/9.0) * (fahr-32);
    printf("%3.0f %6.1f\n",fahr,celsius);
    fahr = fahr + step;
  }
}

