#include <stdio.h>
#include <stdlib.h>

void upperCase(char *name)
{
    while (*name != '\0')
    {
        if(*name >= 'a' && *name <= 'z')
        {
            *name = *name - 32;
        }
        name++;
    }

}

int main(int argc, char const *argv[])
{
    char *name = (char*)malloc(10);

    printf("Enter a name: ");
    scanf("%s", name);

    upperCase(name);
    printf("The name in uppercase: %s\n", name);

    free(name);
}