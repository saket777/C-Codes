#include<stdio.h>
int main(){
    int n,revnum=0,orignum,remainder;
    printf("Enter a number:");
    scanf("%d",&n);
    orignum = n;
    while (n!=0){
        remainder = n%10;
        revnum = revnum*10+remainder;
        n=n/10;
    }
    if(orignum==revnum)
    printf("%d is a palindrome", orignum);
    else
    printf("%d is not a palindrome",orignum);
    
}