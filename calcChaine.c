#include <stdio.h>
#include <stdlib.h>

int calcul(char *chaine)
{

    int taille = 0;
    while (*chaine != '\0'){
        taille++;
        chaine++;
    }
    
    return taille;
}

int main()
{

    char *input = (char*)malloc(100);

    if(input == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }


    printf("entrer un chaine de caracter: ");
    scanf("%s", input);

    printf("size of the string is: %d", calcul(input));

    free(input);
}