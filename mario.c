#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Height: ");
    int n;
    do
    {
        n = get_int();
        if (n < 0 || n > 23)
        {
           printf("Retry: ");
        }
    }
    while (n < 0 || n > 23);
    for (int line = 0; line < n; line++)
    {
        for (int spaces = n - line; spaces > 1; spaces--)
        {
            printf(" ");
        }
        for (int hashes = 0; hashes < line + 2; hashes++)
        {
            printf("#");
        }
        printf("\n");
    }
}