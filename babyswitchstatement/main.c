#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade;

    printf("Enter Grade: ");
    scanf("%c", &grade);

    switch(grade){
    case 'A':
    printf("You are a star");
    break;
        case 'B':
    printf("You did good");
    break;
        case 'C':
    printf("Work hard next time");
    break;
        case 'D':
    printf("You failed");
    break;
        default:
            printf("You did not enter any grades.");
    }
    return 0;
}
