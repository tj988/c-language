#include <stdio.h>

int main (void)
{
    // Arithmetic operators. 

    // Addition.
    int sum = 4 + 3;

    // Subtraction.
    int difference = 9 - 1;

    // Multiplication.
    int product = 2 * 3;

    // Division.
    int quotent = 8 / 2;

    // Modulus operator.
    int remainder = 7 % 2;

    // Mod is useful for continuously cycling through elements in an array (amoung other uses).
    char arr[] = {'X', 'Y', 'Z'};
    for (int i = 0; i < 9; i++)
    {
        printf("%c\n", arr[i % 3]);
    }

    // Unary minus (negates a value).
    int negativeInt = -1;

    // Increment. Can be placed before variable name if needed, i.e. ++incVar; (such as if you need to evaluate value prior to incrementing).
    int incVar = 1;
    incVar++;

    // Decrement. Can be placed before variable name if needed, i.e. --decVar; (such as if you need to evaluate value prior to decrementing).
    int decVar = 3;
    decVar--;
    
    // Override operator precedence with ().
    int result = (9 - 3) * 2;


    // Assignment operators.

    // Plus equals.
    int assignSum = 2;
    assignSum += 3;

    // Minus equals.
    int assignDiff = 3;
    assignDiff -= 1;

    // Multiplication assignment operator.
    int assignProd = 2;
    assignProd *= 3;

    // Division assignment operator.
    int assignQuot = 4;
    assignQuot /= 2;

    return 0;
}