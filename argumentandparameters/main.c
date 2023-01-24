#include <stdio.h>
#include <stdlib.h>

void hello(char smile [], int age, int dow)
{
    printf("Henry is currently %s he is %d and he does it %d a week.", smile, age, dow);
}
int main()
{
    char smile[] = "fasting";
    int age = 24;
    int dow = 5;

    hello(smile,age,dow);

    return 0;
}
