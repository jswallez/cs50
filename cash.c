#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void)
{
    float change;
    int coins = 0;
    int quantity;
    do
    {
        printf("Owed: ");
        change = get_float();
        if (change < 0)
        {
           printf("Impossible! ");
        }
    }
    while (change < 0);

    quantity = round(change * 100.00); // converting float change (dollars) into integer change (cents)

    while (quantity >= 25) // running as long as quantity left is bigger than a quarter coin (25 cents)
    {
        quantity -= 25;
        coins++;
    }
    while (quantity >= 10) // running as long as quantity left is bigger than a dime coin (10 cents)
    {
        quantity -= 10;
        coins++;
    }
    while (quantity >= 5) // running as long as quantity left is bigger than a nickel coin (5 cents)
    {
        quantity -= 5;
        coins++;
    }
    while (quantity >= 1) // running as long as quantity left is superior or equal to a cent coin (1 cent)
    {
        quantity -= 1;
        coins++;
    }

    printf("%i\n", coins);
}