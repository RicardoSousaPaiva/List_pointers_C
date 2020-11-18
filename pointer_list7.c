//Código realizado por Ricardo Sousa de Paiva
//Linguagem de programação. Prof Arakaki
#include <stdio.h>
int main() {

    int j=3;
    int *pj= &j; // Seria, basicamente, atribuir ao ponteiro o endereço de memória da variável j. Para isso, é necessário colocar &.   
    printf("%d\n",*pj);// Para simples teste a saída imprimirá 3. Pois, é o endereço de memória para qual aponta o ponteiro
    return 0;
}