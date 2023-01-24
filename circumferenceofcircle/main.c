#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Here we calculated the circumference of a circle
    const float Pie = 3.14159;
    float radius;
    float circumference;

    //Here we calculate the area of a circle
    float area;


    printf("Enter your radius: \n");
    scanf("%f", &radius);

    printf("\nYour Pi is: %f", Pie);

    area = Pie*radius*radius;
    printf("\nArea of a circle is equal to: %f", area);

    return 0;
}
