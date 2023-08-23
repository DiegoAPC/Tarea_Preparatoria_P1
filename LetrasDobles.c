#include <stdio.h>
int main () {

    char palabra[50];
    int con = 0;
    printf("\nIntroduzca una palabra\n");
    scanf("%s", palabra);

    while (palabra[con] != '\0') {
        
        printf("%c", palabra[con]);
        printf("%c", palabra[con]);
        con++;
    }

}