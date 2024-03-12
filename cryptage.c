#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * decryptage (char *input) {
    char *decrypted = (char*) malloc(strlen(input) + 1);

    if (decrypted == NULL){
        printf("Memory allocation failed\n");
    }

    for(int i=0; input[i] != '\0'; i++){
        decrypted [i] = input[i] - 3;
    }
    decrypted[strlen(input)] = '\0';

    return decrypted;
}

char *cryptage(char *string){
    char *arr = (char*)malloc(strlen(string) + 1);

    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return NULL; 
    }

    for (int i = 0; string[i] != '\0'; i++) 
    {
        arr[i] = string[i] + 3;
    }
    arr[strlen(string)] = '\0';

    return arr;
}

int main(int argc, char const *argv[])
{
    char *input = (char*)malloc(100);
    
    printf("entrer value: ");
    scanf("%s",input);
  
    char *crypted = cryptage(input);
    char *decrypted = decryptage(crypted);
    printf("String before cryptage: %s\n", crypted);
    printf("decrypted value: %s",decrypted);

    free(input);
    free(crypted);
    free(decrypted);


    return 0;
}
