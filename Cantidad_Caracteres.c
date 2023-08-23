#include <stdio.h>
int main () {

    char palabra[50];
    int con = 0;
    printf("\nIntroduzca una palabra\n");
    scanf("%s", palabra);

    while (palabra[con] != '\0') {
        con++;
    }

    printf("\n La cantidad de caracteres es de: %d\n", con);
}