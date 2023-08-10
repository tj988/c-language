#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function prototype declarations.
int max(int length, int values[]);
void printUpper(char* str);

int main(void)
{
    // Demo data.
    int numbers[] = {4, 3, 7, 9};

    // Calling a function that returns a value.
    int result = max(4,numbers);
    printf("Result: %i\n", result);

    // Calling a void function.
    printUpperStr("Hello, World!");

}

// Function example.
int max(int length, int values[])
{
    int max = values[0];

    for (int i = 1; i < length; i++)
    {
        if (values[i] > max)
        {
            max = values[i];
        }
    }
    
    
    return max;
}

// Void function.
void printUpperStr(char* str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        printf("%c", toupper(str[i]));
    }
    printf("\n");
}

// Recursion.
// TO DO