#include <stdio.h>

int main(void)
{
    int i = 17;

    // Declaring a pointer.
    int *p;

    // Using the address operator to assign the address of i to p. 
    p = &i;

    // Using the indirection operator dereference p and assign the value to j.
    int j = *p;

    printf("Value of p: %p\n Dereferencing p: %i\n Value of j: %i\n", &p, *p, j);
    
}