#include <stdio.h>
int main () {
    int n1, n2, pares=0, par, con, par2;
    printf("\nEscriba los numeros inicial y final de rango separado por una coma\n");
    scanf("%d, %d", &n1, &n2);

    con = n2-1;
    if (n1%2==0) {
        for(n1;n1<con;n1++){

            if (n1%2==0) {
                par = n1 + 2;
                pares = pares +1;
            }
            if (par != par2){
                par2 = par;
                printf("Numero par entre ese rango : %d\n", par2);
            }
            
        }
        printf("La cantidad de numeros pares en el rango es : %d\n", pares);
    }
    else {
        n1 = n1- 1;
        for(n1;n1<con;n1++){

            if (n1%2==0) {
                par = n1 + 2;
                pares = pares +1;
            }
            if (par != par2){
                par2 = par;
                printf("Numero par entre ese rango : %d\n", par2);
            }
            
        }
        printf("La cantidad de numeros pares en el rango es : %d\n", pares);
    }

}