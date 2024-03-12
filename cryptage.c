#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *cryptage(char *string)
{
    char *arr = (char*)malloc(strlen(string) + 1);

    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return NULL; // Return NULL to indicate failure
    }

    for (int i = 0; string[i] != '\0'; i++) // Fixed loop condition
    {
        arr[i] = string[i] + 3;
    }
    arr[strlen(string)] = '\0';

    return arr;
}

int main(int argc, char const *argv[])
{
    char string[100]; // Allocate memory for the string

    printf("Enter a string: ");
    scanf("%s", string);

    printf("String before cryptage: %s\n", string);

    char *crypted = cryptage(string);
    if (crypted != NULL)
    {
        printf("String after cryptage: %s\n", crypted);
        free(crypted); // Free the memory allocated by cryptage
    }

    return 0;
}
