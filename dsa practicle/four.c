#include <stdio.h> 
 
void reverseArray(int arr[], int n) { 
    int start = 0; 
    int end = n - 1; 
    int temp; 
 
    while (start < end) { 
        // Swap the elements 
        temp = arr[start]; 
        arr[start] = arr[end]; 
        arr[end] = temp; 
 
        // Move towards the middle 
        start++; 
        end--; 
    } 
} 
 
void displayArray(int arr[], int n) { 
    printf("The elements in the array are:\n"); 
    for (int i = 0; i < n; i++) { 
        printf("%d ", arr[i]); 
    } 
    printf("\n"); 
} 
 
int main() { 
    int N; 
 
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
 
    // Reverse the array 
    reverseArray(arr, N); 
 
    // Display the reversed array 
    printf("The reversed array is:\n"); 
    displayArray(arr, N); 
 
return 0; 
}