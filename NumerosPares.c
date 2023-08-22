#include <stdio.h>
int main () {
    int n1;
    printf("\nIntroduzca el numero para evaluar si es par o no\n");
    scanf("%d", &n1);

    if (n1%2==0) {

        printf("El numero ingresado es par\n");

    }
    else {
        printf("El numero ingresado es impar\n");
    }

}