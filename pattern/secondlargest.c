#include<stdio.h>
#include<limits.h>

int main(){
    int size,largest,secondLargest;
    printf("Enter size of array:");
    scanf("%d",&size);
    if (size < 2) {
        printf("Array must have at least two elements to find the second largest.\n");
        return 0;
    }
    int array[size];
    printf("Enter Element of array:");
    for(int i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    printf("Array Elements are:");
    for(int i=0;i<size;i++){
        printf("%d ",array[i]);
    }

    largest = INT_MIN;
    secondLargest = INT_MIN;

    //finding the largest and second largest element 
    for (int i = 0; i < size; i++) {
        if (array[i] > largest) {
            secondLargest = largest; // Update second largest
            largest = array[i];      // Update largest
        } else if (array[i] > secondLargest && array[i] != largest) {
            secondLargest = array[i]; // Update second largest
        }
    }
    
    if(secondLargest == INT_MIN){
        printf("No second largest element found.");
    }else{
        printf("\n %d is the Second largest Elements of array",secondLargest);
    }    

    return 0;
}