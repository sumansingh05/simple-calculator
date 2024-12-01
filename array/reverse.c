#include<stdio.h>
int main(){
    int size;
    printf("Enter size of array:");
    scanf("%d",&size);
    int array[size];
    for(int i=0;i<size;i++){
        printf("Enter element %d:",i+1);
        scanf("%d",&array[i]);
    }
    printf("Array elements are:");
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
        
    }

    //reverse the array
    for(int i=0,j=size-1;i<j;i++,j--){
        int temp=array[i];
        array[i]=array[j];
        array[j]=temp;
    }
    printf("\nReversed array:");
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }

    return 0;
}