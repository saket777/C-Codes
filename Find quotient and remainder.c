#include<stdio.h>
int main(){
  int divident,divisor,remainder,quotient;
  printf("Enter the divident:");
  scanf("%d",&divident);
  printf("Enter divisor:");
  scanf("%d",&divisor);
  quotient=divident/divisor;
  remainder=divident%divisor;
  printf("quotient=%d\n",quotient);
  printf("remainder=%d\n",remainder);
  return 0;
}