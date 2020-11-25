#include <cs50.h>
#include <stdio.h>

int add_two_inputs(int a, int b);

int main (void)
{
    int a = get_int ("Insert a value: ");

    int b = get_int("Insert b value: ");

    int c = add_two_inputs(a,b);

    printf("The sum of %i and %i is %i", a, b, c);

}

int add_two_inputs(int a, int b)
{
    int sum  = a + b;
    return sum;
}
