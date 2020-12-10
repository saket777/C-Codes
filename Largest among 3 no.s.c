#include<stdio.h>
int main(){
    double n1,n2,n3;
    printf("Enter three numbers:");
    scanf("%lf%lf%lf",&n1,&n2,&n3);
    if(n1>=n2&&n1>=n3)
    printf("%.2lf is largest",n1);
    else if(n2>=n1&&n2>=n3)
    printf("%.2lf is largest",n2);
    else
    printf("%.2lf is largest",n3);
    return 0;
}