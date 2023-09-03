#include <stdio.h>



int main(void) 
{
    // Struct definition.
    struct order
    {
        int number;
        double total;
    };

    // Declaring a struct.
    struct order firstOrder;

    // Setting struct members.
    firstOrder.number = 00032;
    firstOrder.total = 7.99;

    // Initalizing a struct.
    struct order secondOrder = {00033, 8.49};

    // Alternative initalization using named members.
    struct order thirdOrder = {.number = 00034, .total = 10.99};

    // Compound literals.
    struct order fourthOrder;
    fourthOrder = (struct order) {00035, 5.29};

    // Arrays of structs.
    struct order orders[2];

    orders[0].number = 00036;
    orders[0].total = 2.99;

    orders[1].number = 00037;
    orders[1].total = 3.49;

}