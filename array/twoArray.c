#include<stdio.h>
int main(){
    int array1[5],array2[5],result[5];
    printf("Enter the element of first array:");
    for(int i=0;i<5;i++){
        scanf("%d",&array1[i]);
    }
    printf("Enter the element of second array:");
    for(int i=0;i<5;i++){
        scanf("%d",&array2[i]);
    }

    printf("The element of resultant array:");
    for(int i=0;i<5;i++){
        result[i] = array2[i] - array1[i];
        printf("%d ",result[i]);
    }

    return 0;
}