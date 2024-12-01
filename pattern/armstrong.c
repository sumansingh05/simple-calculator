#include<stdio.h>
#include<math.h>

int main(){
    int num,originalNum,remainder,result=0,n=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    originalNum=num;

    //count the number of digit
    while(originalNum != 0){
        originalNum = originalNum / 10;
        ++n;
    }

    originalNum=num;

    while(originalNum != 0){
        remainder = originalNum % 10;
        result += (int)pow(remainder,n); 
        originalNum = originalNum / 10;
    }

    if(result == num){
        printf("%d is an Armstrong number",num);
    }else{
        printf("%d is not an Armstrong number",num);
    }

    return 0;
}