#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 90;
    char location[6] = "Benin";
    strcpy (location, "Edo");
    printf("Silver is from %s, and she is %d years old", location, age);
    return 0;
}
