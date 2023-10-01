#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Use malloc() to allocate memory.
    int *ints = (int *) malloc(5 * sizeof(int));

    // Confirm that malloc() call was successful, exit if it wasn't.
    if (ints == NULL)
    {
        return 1;
    }

    // Populating array with example data and printing.
    for (int i = 0; i < 5; i++)
    {
        ints[i] = i + 1;
        printf("%i ", ints[i]);
    }
    
    // Freeing the memory.
    free(ints);
    
}