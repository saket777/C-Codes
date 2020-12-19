#include<stdio.h>
int main(){
  double base, exp, result;
    printf("Enter the base value:");
    scanf("%lf",&base);
    printf("Enter the exponent:");
    scanf("%lf",&exp);
    result = pow(base,exp);
    printf("%.1lf^%.1lf = %.2lf",base,exp,result);
    return 0;
    
}