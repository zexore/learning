#include <cs50.h>
#include <stdio.h>
#include <math.h>

    int x25, x10, x5, x1;
    int y25, y10, y5, y1;

int main(void)
{

    float cents  = get_float("Change owed: ");
    float q = round(cents*100);
    int z = q;
        x25 = round(z/25);
            y25 = z % 25;
        x10 = round(y25/10);
            y10 = y25 % 10;
        x5 = round(y10/5);
            y5 = y10 % 5;
        x1 = y5/1;

    int coins = x25 + x10 + x5 + x1;
    printf("%d\n", coins);
}
