/*FATEC
Curso:ADS/B; Matutino
Disciplina: Linguagem de programação
Professor: Reinaldo Arakaki
Aluno: Ricardo Sousa de Paiva
Prova: Estruturas */

#include <stdio.h>

typedef struct st_complexnumber{
    int real;
    int imag;
}complexo;
complexo complexosoma(complexo A, complexo B){
   complexo res;
    
    res.real = A.real + B.real;
    res.imag = A.imag + B.imag;

    return res;
}
complexo complexomulti(complexo A, complexo B){
    complexo res;
    
    res.real = (A.real * B.real) - ( A.imag * B.imag);
    res.imag = (A.imag * B.real) + (A.real * B.imag); 

    return res;
}
void imprimir(complexo a){
    
    if( a.imag > 0){
        printf("%d + %di\n", a.real, a.imag);
    }else{
    printf("%d %di\n", a.real, a.imag);
    }
}
void main(){
    complexo A;
    complexo B;
        
    printf("Digite parte Real de A:");
    scanf("%d", &A.real);

    printf("Digite parte imaginária de A:");
    scanf("%d", &A.imag);

    printf("Digite parte Real de B:");
    scanf("%d", &B.real);
    
    printf("Digite parte imaginária de B:");
    scanf("%d", &B.imag);

    complexo res;
    res= complexosoma(A,B);
    imprimir(res);
    res = complexomulti(A,B);
    imprimir(res); 
}