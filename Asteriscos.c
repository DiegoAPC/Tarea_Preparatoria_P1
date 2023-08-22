#include <stdio.h>
int main () {
    int num, i, i2;
    printf("Introduzca el numero de filas para mostrar\n");
    scanf("%d", &num);
    for(i= 0;i<num;i++)
     {
        for(i2= 0;i2<=i;i2++)
        {
            
            printf("*");
        } 
        
        printf("\n");
     }
    
    
}