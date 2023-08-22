#include <stdio.h>
int main () {
    int num, num2, fac = 1;
    printf("Introduzca el numero para calcular su factorial\n");
    scanf("%d", &num);
    for(num2= num;num2>1;num2--)
     {
        fac = fac * num2;
     }
    printf("Factorial %d\n", fac);
    
    
}