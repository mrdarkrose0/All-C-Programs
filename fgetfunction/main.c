#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name [25];

    printf("What is your name: \n");
    fgets(name, 25, stdin);

    printf("Hello %s", name);


    return 0;
}
