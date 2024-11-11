#include <stdio.h>
int main()
{
    int radius;

    printf("Enter the radius: ");

    scanf("%d", &radius);

    int x = (radius * radius) * 3.14;

    printf("Answer: %d", x);

    return 0;
}