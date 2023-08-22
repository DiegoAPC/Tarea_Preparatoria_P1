#include <stdio.h>
int main () {
    float num, num2, c = 1.609344, c2 = 4.54609188;
    printf("Introduzca las millas por galon imperial de su medida\n");
    scanf("%f", &num);

    num2 = (num * c)/ c2;
    printf("La conversion a kilometros por litros es: %.2f\n", num2);
    
}