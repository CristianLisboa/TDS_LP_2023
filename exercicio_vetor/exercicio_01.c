#include <stdio.h>

int main(){


    int A [6];
    A [0] = 1;
    A [1] = 0;
    A [2] = 5;
    A [3] = -2;
    A [4] = -5;
    A [5] = 7;
    
    int soma = A[0] + A[1] + A[5];
    
    
    
    printf("A soma dos slots 0, 1 e 5 é: %d \n", soma);
    A [4] = 100; // escolhi o 4 porque não ficou claro na problematica se era o 4º vetor, ou a posição numero 4.
    
    for( int i = 0; i<=5; i++ ){
        printf("vetor[%d} é %d \n",i, A[i]);
    }
  
  

return 0 ;

}