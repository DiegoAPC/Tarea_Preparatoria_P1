#include <stdio.h>

int main () {
    char op;
    float temp;

    while (1) {
        printf("\n-------------------\n");
        printf("Seleccione la conversion\n");
        printf("1. Celsius a Fahrenheit\n");
        printf("2. Fahrenheit a Celsius\n");
        printf("3. Cerrar el programa\n");
        scanf("%c", &op);

        switch (op) {
        case '1':
            printf("Ingrese la temperatura en grados Celsius: ");
            scanf("%f", &temp);
            float fahrenheit = (temp * 9 /5) + 32;
            printf("%.2f grados Celsius son %.2f grados Fahrenheit. \n", temp, fahrenheit);
            break;
        case '2':
            printf("Ingrese la temperatura en grados Fahrenheit: ");
            scanf("%f", &temp);
            float celsius = (temp -32) * 5/  9;
            printf("%.2f grados Fahrenheit son %.2f grados Celsius. \n", temp, celsius);
            break;
        case '3':
            printf("Programa cerrado.\n");
            return 0;
        default:
            printf("Opcion no valida.\n");
        }
    }
}