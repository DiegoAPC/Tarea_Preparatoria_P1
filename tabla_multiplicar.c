#include <stdio.h>
int main () {
    int num, tbl;
    printf("Introduzca el numero para la tabla de multiplicar\n");
    scanf("%d", &num);
    for(tbl=0;tbl<11;tbl++)
     {
        printf("%d * %d = %d\n", num, tbl, (num * tbl));
     }
    return 0;
}