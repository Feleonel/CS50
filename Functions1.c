#include <cs50.h>
#include <stdio.h>

bool valid_triangle(float a, float b, float c);

int main (void)
{
    float a = get_float("Side a: ");

    float b = get_float("Side b: ");

    float c = get_float("Side c: ");

    bool x = valid_triangle(a,b,c);

    if (valid_triangle(a,b,c))
    {
        printf("The triangle is valid\n");
    }
    else
    {
        printf("The triangle is not valid");
    }

}
bool valid_triangle(float a, float b, float c)
{
    if (a <= 0 || b <= 0 || c <= 0)
    {
        return false;
    }
    if (a + b <= c || a + c <= b || b + c <= a)
    {
        return false;
    }
    else
    {
        return true;
    }
}
