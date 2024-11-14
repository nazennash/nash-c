#include <stdio.h>

typedef struct
{
    int length;
    int width;
} rectangle;

int main()
{
    rectangle r1 = {10, 20};
    rectangle r2 = {30, 40};

    printf("Area of r1: %d\n", r1.length * r1.width);
    printf("Area of r2: %d\n", r2.length * r2.width);
    return 0;
}
