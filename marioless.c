#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Ask for the size of the Pyramid

    int n = get_int("Size: ");

        while ( n < 1 || n > 8)
        {
            n = get_int("Size: ");
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
            printf("\n");
        }
}
