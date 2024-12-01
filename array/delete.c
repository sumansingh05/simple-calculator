#include <stdio.h>

int main()
{
    int arr[10], i, pos;

    // Input 10 elements into the array
    printf("Enter 10 elements of the array:");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Input the position of the element to delete
    printf("Enter the position of the element to delete (1 to 10): ");
    scanf("%d", &pos);

    // Check if position is valid
    if (pos < 1 || pos > 10)
    {
        printf("Invalid position! Please enter a position between 1 and 10.\n");
    }
    else
    {
        // Shift elements to the left to fill the gap
        for (i = pos - 1; i < 9; i++)
        {
            arr[i] = arr[i + 1];
        }

        // Display the array after deletion
        printf("Array after deletion:");
        for (i = 0; i < 9; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
