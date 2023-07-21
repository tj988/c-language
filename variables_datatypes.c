#include <stdio.h>
#include <stdbool.h>


int main(void)
{
    // Types.

    // Integer type.
    int myInt = 7;

    // Floating point types.
    float myFloat = 17.22f;
    double myDouble = 11.399f;

    // Char type.
    char myChar = 'C';

    // Boolean type (1 is true, 0 is false).
    _Bool myBool = 1;
    // For ease, use <stdbool.h> that allows for use of bool, true, and flase.
    bool myBool1 = true;


    // Type specifiers.

    // short int. May take half space of int on some machines. May ommit int (i.e. just short).
    short int myShortInt = 3;

    // long int. May be extended range compared to normal int, but machine dependent. May ommit int (i.e. just long).
    long int myLongInt = 2l;

    // long long int. Guranteed to be at least 64 bits. May ommit int (i.e. just long long).
    long long int myLongLong = 9223372036854775807ll;

    // long double. Machine dependent number of bits.
    long double myLongDouble = 15.332l;

    // unsigned specifier.
    unsigned int myUnsignedInt = 8u;

    // unsigned short int.
    unsigned short int myUnsignedShort = 3;

    // unsigned long int.
    unsigned long int myUnsignedLong = 23ul;

    // unsigned long long.
    unsigned long long myUnsignedLongLong = 14ull;

    // printf formatting for types and type specifiers.

    // int. Can also use %x, %o.
    printf("int: %i\n", myInt);

    // float. Can also use %e, %g, %a.
    printf("float: %f\n", myFloat);

    // double. Can also use %e, %g, %a.
    printf("double: %f\n", myDouble);

    // char.
    printf("char: %c\n", myChar);

    // _Bool or bool. Can also use %u.
    printf("_Bool: %i\n", myBool);

    // short int and unsigned short int. Can also use %hx, %ho.
    printf("short int: %hi\n", myShortInt);

    // long int. Can also use %lx, %lo.
    printf("long int: %li\n", myLongInt);

    // long long int. Can also use %llx, %llo.
    printf("long long int: %lli\n", myLongLong);

    // unsigned int. Can also use %x, %o.
    printf("unsigned int: %u\n", myUnsignedInt);

    // unsigned short int. Can also use %hx, %ho.
    printf("unsigned short int: %hu\n", myUnsignedShort);

    // unsigned long int. Can also use %lx, %lo.
    printf("unsigned long int: %lu\n", myUnsignedLong);

    // unsigned long long int. Can also use %llx, %llo.
    printf("unsigned long long int: %llu\n", myUnsignedLongLong);

    // long double. Can also use %Le, %Lg.
    printf("long double: %Lf\n", myLongDouble); 

    return 0;

}