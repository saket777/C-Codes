#include<stdio.h>
int main(){
    int num,i;
    printf("Enter a positive number");
    scanf("%d",&num);
    printf("Factors of a number:");
    for(i=1;i<=num;i++){
        if(num%i==0){
        printf("%d ",i);
    }
    }
}