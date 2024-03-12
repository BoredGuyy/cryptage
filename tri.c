#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int numbers[7];

    srand(time(NULL));

    for(int i = 0; i < 7; i++)
    {
        numbers[i] = rand() % 10;
        printf("%d\n", numbers[i]);
    }

    for(int i = 0; i < 7; i++)
    {
        int min = i;
        for(int j = i+1; j < 7; j++)
        {
            if (numbers[j] < numbers[min])
            {
                min = j;
            }
        }
        int temp = numbers[min];
            numbers[min] = numbers[i];
            numbers[i] = temp;
    }

    printf("\nSorted\n");

    for(int i = 0; i < 7; i++)
    {
        printf("%d\n", numbers[i]);
    }

    return 0;
}