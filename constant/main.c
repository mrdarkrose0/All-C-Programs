#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a  = 24;
    int b = 5;
    float c = a / (float)b;

    int e  = 24;
    int f = 5;
    int g = e%f;

    int z = 10;
    z +=4;



    printf("%.3f", c);
    g--;
    printf("\n%d", g);
    printf("\n%d", z);
    return 0;
}
