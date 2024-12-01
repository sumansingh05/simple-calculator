#include <stdio.h> 
 
void insertElement(int arr[], int *n, int element, int position) { 
    // Check if the position is valid 
    if (position < 0 || position > *n) { 
        printf("Invalid position! Please enter a position between 0 and %d.\n", *n); 
        return; 
    } 
 
    // Shift elements to the right to make space for the new element 
    for (int i = *n; i > position; i--) { 
        arr[i] = arr[i - 1]; 
    } 
 
    // Insert the new element 
    arr[position] = element; 
 
    // Increase the size of the array 
    (*n)++; 
} 
 
void displayArray(int arr[], int n) { 
    printf("The elements in the array are:\n"); 
    for (int i = 0; i < n; i++) { 
        printf("%d ", arr[i]); 
    } 
    printf("\n"); 
} 
int main() { 
int N, element, position; 
// Prompt the user for the number of elements 
printf("Enter the number of elements in the array: "); 
scanf("%d", &N); 
// Create an array of size N 
int arr[N]; 
// Input values into the array 
printf("Enter %d integer values:\n", N); 
for (int i = 0; i < N; i++) { 
printf("Element %d: ", i + 1); 
scanf("%d", &arr[i]); 
} 
// Display the original array 
displayArray(arr, N); 
// Input the element to insert and the position 
printf("Enter the element to insert: "); 
scanf("%d", &element); 
printf("Enter the position to insert the element (0 to %d): ", N); 
scanf("%d", &position); 
// Insert the element into the array 
insertElement(arr, &N, element, position); 
// Display the updated array 
    displayArray(arr, N); 
 
    return 0; 
}