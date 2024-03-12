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

int main(int argc, char const *argv[])
{
    char *input;
    
    printf("entrer crypted value: ");
    scanf("%s",input);

    char *decrypted = decryptage(input);

    printf("decrypted value: %s",decrypted);

    free(decrypted);
    return 0;
}
