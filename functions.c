#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function prototype declarations.
int max(int length, int values[]);
void printUpperStr(char* str);
long int factorial(long int n);


int main(void)
{
    // Demo data.
    int numbers[] = {9, 2, 1, 7, 5, 4};

    // Calling a function that returns a value.
    int result = max(6,numbers);
    printf("Result: %i\n", result);

    // Calling a void function.
    printUpperStr("Hello, World!");

    // Calling the factorial (nothing special, just for demo).
    printf("5!: %li\n", factorial(5));
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


// Void function example.
void printUpperStr(char* str)
{
    for (int i = 0; i < strlen(str); i++)
    {
        printf("%c", toupper(str[i]));
    }
    printf("\n");
}


// Recursive function example.
long int factorial(long int n)
{
    long int output;
    
    // Return -1 if a negative value is passed.
    if (n < 0)
    {
        return -1;
    }
    
    if (n == 0)
    {
        output = 1;
    } 
    else
    {
        output = n * factorial(n - 1);
    }
    
    return output;
}

