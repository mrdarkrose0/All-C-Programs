#include <stdio.h>
#include <stdlib.h>

void bio(char[], int);
int main()
{
    char name[] = "Henry";
    int age = 24;
    bio(name,age);
    return 0;
}

void bio(char name[], int age){

    printf("Hello my name is %s, and I am %d  years old.", name, age);
}
