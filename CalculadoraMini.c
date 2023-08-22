#include <stdio.h>
int main () {
    int n1, dt, num, op,suma = 0, mult =1;
    do {
        printf(" --- Calcular ---\n");
        printf("\n¿Que desea hacer?\n");
        printf("1) sumar\n");
        printf("2) Multiplicar\n");
        printf("3) Salir\n");
        scanf("%d",&op);

        switch(op) {
            case 1:
            printf("\tSumar\n");
            printf("Introduzca la cantidad de numeros a ingresar\n");
            scanf("%d", &num);
            for(dt=0;dt<num;dt++)
            {
            printf("Introduzca el numero\n");
            scanf("%d", &n1);
            suma = suma + n1;
            }
            printf("La suma total es: %d\n",suma);

            break;
            case 2:
            printf("\tMultiplicar\n");
            printf("Introduzca la cantidad de numeros a ingresar\n");
            scanf("%d", &num);
            for(dt=0;dt<num;dt++)
            {
            printf("Introduzca el numero\n");
            scanf("%d", &n1);
            mult = mult * n1;
            }
            printf("La multiplicacion total es: %d\n",mult);
            break;
            case 3:
            printf("\tSalir\n");
            break;
            default:
            printf("\t Opcion invalida.\n");
        }
    } while (op != 3);
    return 0;
}