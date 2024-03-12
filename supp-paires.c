#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    int numbers[10];
    int counter = 0;

    srand(time(NULL));

    for(int i = 0; i < 10; i++)
    {
        numbers[i] = rand() % 10;
        printf("%d\n", numbers[i]);
    }

    for(int i = 0; i < 10; i++)
    {
        if(numbers[i] % 2 != 0)
        {
            numbers[counter] = numbers[i];
            counter++;
        }
    }

    printf("\nimpairs deleted\n");
    for(int i = 0; i < counter; i++)
    {
        printf("%d\n", numbers[i]);
    }

}