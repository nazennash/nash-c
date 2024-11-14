#include <stdio.h>

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {

        arr[i] *= 2;
        printf("After adjustment: %d\t", arr[i]);
    }
}

int main()
{
    int slicesEachMeal[] = {4, 5, 6, 7, 8};
    int numMeals = sizeof(slicesEachMeal) / sizeof(slicesEachMeal[0]);

    printf("Number of meals: %d\n", numMeals);

    printArray(slicesEachMeal, numMeals);

    return 0;
}
