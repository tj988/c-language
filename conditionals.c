# include <stdio.h>

int main(void)
{
    // If, else if, else construct.
    char letter = 'C';
    if (letter == 'A')
    {
        printf("%c: First letter of the alphabet.\n", letter);
    }
    else if (letter == 'B')
    {
        printf("%c: Second letter of the alphabet.\n", letter);
    }
    else
    {
        printf("%c: Third letter of the alphabet.\n", letter);
    }
    

    // Switch.
    char character = 'Y';

    switch (character)
    {
    case 'X':
        printf("%c is the 3rd from last letter in the alphabet.\n", character);
        break;
    
    case 'Y':
        printf("%c is the 2nd from last letter in the alphabet.\n", character);
        break;
    
    case 'Z':
        printf("%c is the last letter in the alphabet.\n", character);
        break;
    
    default:
        printf("This is an unknown character.");
        break;
    }

    // Conditional operator (aka ternary operator).
    _Bool decision = 0;
    decision == 1 ? printf("The boolean is true.\n") : printf("The boolean is false.\n");

    return 0;
}