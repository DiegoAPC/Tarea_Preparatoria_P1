#include <stdio.h>
int main () {
    int num, nm = 0, nm2 = 1, con, s;
    printf("Introduzca el numero de termino que quiera ver de la serie Fibonacci\n");
    scanf("%d", &num);
    for(con=1;con<=num;con++)
     {
        s = nm + nm2;
        printf("Termino %d\n", s);
        nm = nm2;
        nm2 = s;
     }
    
    
}