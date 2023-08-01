#include <stdio.h>

int main(void)
{
    // Single dimension array.
    int intArray[5] = {3, 4, 6, 2, 9};

    for (int i = 0; i < 5; i++)
    {
        printf("%i\n", intArray[i]);
    }
    
    // Two-dimensional array.
        char charArray[2][3] = {{'A', 'B', 'C'},
                                {'X', 'Y', 'Z'}};

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%c ", charArray[i][j]);
            }
            printf("\n");   
        }    
}