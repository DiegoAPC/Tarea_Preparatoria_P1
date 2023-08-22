#include <stdio.h>

int main () {
    char op; 
    float pi = 3.1416, raiz = 1.732050808, num, num2, num3;

    while (1) {
        printf("\n-------------------\n");
        printf("Seleccione la figura para obtener su volumen\n");
        printf("1. Volumen de un cubo\n");
        printf("2. Volumen de una esfera\n");
        printf("3. Volumen de una piramide de base triangular\n");
        printf("4. Volumen de una piramide de base cuadrada\n");
        printf("5. Cerrar el programa\n");
        scanf(" %c", &op);

        switch (op) {
        case '1':
            printf("Ingrese la medida de los lados del cubo, separados por una coma: ");
            scanf("%f, %f, %f", &num, &num2, &num3);
            float vol = num * num2 *num3;
            printf("El volumen del cubo es de: %.2f\n", vol);
            break;
        case '2':
            printf("Ingrese la medida del radio de la esfera: ");
            scanf("%f", &num);
            float vol2 = (num * num * num * pi * 4)/3;
            printf("El volumen de la esfera es de: %.2f\n", vol2);
            break;
        case '3':
            printf("Ingrese la medida de la base de la piramide y la altura, separados por una coma: ");
            scanf("%f, %f", &num, &num2);
            float vol3 = (num * num *num2 *raiz ) /12;
            printf("El volumen de la piramide con base triangular es de: %.2f\n", vol3);
            break;
        case '4':
            printf("Ingrese la medida de la base de la piramide y su altura, separados por una coma: ");
            scanf("%f, %f", &num, &num2);
            float vol4 = (num * num2)/3;
            printf("El volumen de la piramide con base cuadrada es de: %.2f\n", vol4);
            break;
        case '5':
            printf("Programa cerrado.\n");
            return 0;
        default:
            printf("Opcion no valida.\n");
        }
    }
}