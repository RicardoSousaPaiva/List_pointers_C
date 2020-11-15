//Código realizado por Ricardo Sousa de Paiva
//Linguagem de programação. Prof Arakaki
#include<stdio.h>
int main() {
    int x = 10,p;
    int *px = &x;//o ponteiro px aponta para o endereço de x.
    printf("%d\n", *px / 5 );//Ao dividir *px por 5. É dividido o valor contido no endereço apontado por px. No caso X. A saída será 2.
 return 0;                    
}       
