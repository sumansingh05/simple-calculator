#include<stdio.h>
int main(){
    int n,revNumber=0;
    printf("Enter a number:");
    scanf("%d",&n);
    int number = n;
    while(n != 0){
        int remainder = n % 10;
        revNumber = revNumber*10 + remainder;
        n = n / 10;
    }
    if(number == revNumber){
        printf("Number is palindrome number.");
    }else{
        printf("Number is not a palindrome number.");
    }

    return 0;
}