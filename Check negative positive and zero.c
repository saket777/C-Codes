#include<stdio.h>
int main(){
    double num;
    printf("Enter the Number:");
    scanf("%lf",&num);
    if(num<0.0)
    printf("You entered negative number");
    else if(num>0.0)
    printf("You entered positive number");
    else
    printf("You entered zero");
    return 0;
    
}