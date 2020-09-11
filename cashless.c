#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    
    //Declaring variables
    float dollars  = 0;
    int cents = 0;
    int q = 0;
    int d = 0;
    int n = 0;
    int p = 0;
    
    //Asks for the change
    dollars = get_float("Change owed: ");
    cents = round(dollars * 100);

    //Check if the value is negative
    while (dollars < 0)
    {
        dollars = get_float("Change owed: ");
        cents = round(dollars * 100);
    }


    //QUARTERS

    //Verfies if the change is higher than $0.25
    if(cents >= 25)
    {
        //Calculates the number of quarters ($0.25)
        q = (cents / 25);

        //Certifies about the number of coins
        if(q * 25 > cents)
        {
            q = (q - 1);
        }
    }


    //DIMES

    //Verifies if the change is higher than $0.10
    if(cents >= 10)
    {
        //Verifies if still has change to give
        if(25 * q < cents)
        {
            //Calculates the number of dimes ($0.10)
            d = ((cents - (25 * q))/10);

            //Certifies about the number of coins
            if(q * 25 + d * 10 > cents)
            {
                d = (d - 1);
            }
        }
    }


    //NICKLES

    //Verifies if the change is higher than $0.05
    if(cents >= 5)
    {
        //Verifies if still has change to give
        if(25 * q + 10 * d < cents)
        {
            //Calculates the number of nickles
            n = ((cents - (q * 25 + d * 10))/5);
        }
    }


    //PENNIES

    //Verifies if still has change to give
    if(25 * q + 10 * d + 5 * n < cents)
    {
        if(cents > 5)
        {
            //Calculates the number of nickles
            p = (cents - (q * 25 + d * 10 + n * 5));
        }
        else
        {
            p = cents;
        }
    }

    //Calculates the total number of coins
    printf("%i\n", q + d + n + p);
}
