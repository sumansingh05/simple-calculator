#include <stdio.h> 
 
int main() { 
    int N, i; 
 
    // Prompt the user for the number of elements 
    printf("Enter the number of elements in the array: "); 
    scanf("%d", &N); 
 
    // Create an array of N integers 
    int arr[N]; 
 
    // Input values into the array 
    printf("Enter %d integer values:\n", N); 
    for (i = 0; i < N; i++) { 
        printf("Element %d: ", i + 1); 
        scanf("%d", &arr[i]); 
    } 
 
    // Display the array elements 
    printf("The elements in the array are: "); 
    for (i = 0; i < N; i++) { 
        printf("%d ", arr[i]); 
    } 
    printf("\n"); 
 
    return 0; 
} 