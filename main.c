#include <stdio.h>
int main()
{
    printf("What is your favourite food?");

    char favFood[5];
    scanf("%4s", favFood);

    printf("Your favourite food is %s", favFood);

    // get length of a string
    int charCount = 0;

    while (favFood[charCount] != '\0')
    {
        charCount++;
    }
    printf("The length of your favourite food is %d", charCount);

    return 0;
}