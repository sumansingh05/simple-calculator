#include <stdio.h> 
 
void deleteElement(int arr[], int *n, int position) { 
    // Check if the position is valid 
    if (position < 0 || position >= *n) { 
        printf("Invalid position! Please enter a position between 0 and %d.\n", *n - 1); 
        return; 
    } 
 
    // Shift elements to the left to remove the element at the specified position 
    for (int i = position; i < *n - 1; i++) { 
        arr[i] = arr[i + 1]; 
    } 
 
    // Decrease the size of the array 
    (*n)--; 
} 
 
void displayArray(int arr[], int n) { 
    printf("The elements in the array are:\n"); 
    for (int i = 0; i < n; i++) { 
        printf("%d ", arr[i]); 
    } 
    printf("\n"); 
} 
 
int main() { 
    int N, position; 
 
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
 
    // Input the position of the element to delete 
    printf("Enter the position of the element to delete (0 to %d): ", N - 1); 
    scanf("%d", &position); 
 
    // Delete the element from the array 
    deleteElement(arr, &N, position); 
 
    // Display the updated array 
    displayArray(arr, N); 
 
    return 0; 
} 
