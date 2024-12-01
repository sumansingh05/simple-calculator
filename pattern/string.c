#include <stdio.h>
#include <string.h>

int main()
{
    char str[10], reverse[10];
    printf("Enter a string:");
    scanf("%s", str);
    int length = strlen(str);

    for (int i = length - 1; i >= 0; i--)
    {
        reverse[length - 1 - i] = str[i];
    }

    reverse[length] = '\0';
    
    printf("Reverse string: %s", reverse);

    return 0;
}