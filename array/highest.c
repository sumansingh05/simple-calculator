#include<stdio.h>
int main(){
    
    int array[10]; 
    int size,highest;
    printf("Enter size of array:");
    scanf("%d",&size);
    printf("Enter elements of array:");
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    highest = array[0];
    for(int i=1;i<size;i++){
        if(array[i]>highest){
            highest=array[i];
        }
    }
    printf("Highest element in array is %d",highest);
    return 0;
}