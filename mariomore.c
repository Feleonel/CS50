#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Ask for the size of the Pyramid

    int n = get_int("Height: ");

    while ( n < 1 || n > 8)
    {
        n = get_int("Height: ");
    }
    for (int j = 0; j < n ; j++)
    {

        //Specifies the number of empty spaces in each line
        for (int i = 0; i < n - j - 1 ; i++)
        {
            printf(" ");
        }

        //Specifies the number of # in each line
        for (int z = 0 ; z < j + 1 ; z++)
        {
            printf("#");
        }

        printf("  ");

        //Specifies the number of # in each line
        for (int k = 0 ; k < j + 1 ; k++)
        {
            printf("#");
        }

        printf("\n");
    }
}
