#include<stdio.h>
int main(){
    double first,second,temp;
    printf("Enter 1st Number:");
    scanf("%lf",&first);
    printf("Enetr 2nd Number:");
    scanf("%lf",& second);
    temp = first;
    first = second;
    second = temp;
    printf("\n After swaping first Number=%.2lf" ,first);
    printf("\n After swaping second Number=%.2lf" ,second);
    return 0;
}