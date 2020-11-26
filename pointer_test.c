/*FATEC
Curso:ADS/B; Matutino
Disciplina: Linguagem de programação
Professor: Reinaldo Arakaki
Aluno: Ricardo Sousa de Paiva
Desafio: Prova com ponteiros */

#include <stdio.h>
void MAX(int n, int A[n][n], int *k, int *lin, int *col){// LETRA A
    *k= A[0][0]; // k inicializado no primeiro elemento da matriz
    int i,j;
    *lin=0;
    *col=0;
    for( i=0; i < n; i++){ // os dois for andam pelas posições da matriz
        for(j=0; j< n; j++){
            if(A[i][j] > *k){// o if vai comparar os elementos da matriz. E atualizar o maior para dentro de k
            *k = A[i][j];
            *lin =i;
            *col =j;
            }            
        }
    } 
}   
int main(){//LETRA B
    int i,j,n;

    scanf("%d",&n);//Entrada de um inteiro para definir o tamanho da matriz
    int A[n][n];
    for(i=0; i < n; i++){// Os dois for irão recolher os dados de entrada (Scanf) e colocar nas posições da matriz
        for(j=0; j < n; j++){
            scanf("%d",&A[i][j]);//Cada valor é colocado no endereço de memória específico da matriz
        }          
    }
    int k,lin,col;
    printf("Elem  Linha Coluna ");
    for(i=0; i < n*n; i++){// Esse for realiza o loop para que todos os elementos da matriz seja chamado e impresso.
        MAX(n,A,&k,&lin,&col);// Passa o endereço de memória das variáveis para a função Max e, com isso, para os ponteiros.
        printf("\n%d\t %d\t %d", k, lin,col);// O \t dar um espaço para alinhar com os títulos
        A[lin][col]=-1;// o -1 possibilita que a posição da matriz seja movimentada. Em cada loop ele diminui uma posição.Assim, cada número maior é atualizado.  
    }
    printf("\n");  
    return 0;
}
    
