#include <stdio.h>

int main(void)
{
    // For loop. Useful if you know a predetermined number of times to loop and only require evaluating one variable.
    for (int i = 0; i < 5; i++)
    {
        printf("%i\n", i);
    }
    

    // While loop construct is good for situations where you do not know how many times a loop needs executed
    // or if you need to loop based upon the state of more than one variable.
    int j = 0;
    while (j < 3)
    {
        printf("%i\n", j);
        j++;
    }
    

    // Do-while construct is useful if you need to execute at least once since boolean evaluation follows block execution.
    int k = 0;
    do
    {
        printf("%i\n", k);
        k++;
    } 
    while (k < 3);
    

    // Break statement. Breaks out of loop based upon some condition.
    for (int l = 0; l < 5; l++)
    {
        if (l == 3)
        {
            break;
        }
        printf("%i\n", l);
    }
    

    // Continue statement. Continues to the next execution of the loop based upon some condition.
    for (int m = 0; m <= 5; m++)
    {
        if (m % 2 != 0)
        {
            continue;
        }
        
    }
}