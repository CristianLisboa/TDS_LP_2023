#include <stdio.h>

int main()
{
    int numeros[10];
    int i = 0;
    int pares= 0;
    
    for( int i = 0; i<=9; i++ ){
        printf("Digite o valor para a poosição %d \n", i);
        scanf("%d", &numeros[i]);
   }
    i = 0;
    
   for( int i = 0; i<=9; i++ ){
       if(numeros[i]%2 == 0){
           printf("O vetor de posição %d é PAR; \n", i+1);
           pares++;
       }else{
           printf(" O vetor de posição %d é IMPAR; \n", i+1 );
       }
   }
    
     printf(" O total de pares é :  %d\n", pares );

    return 0;
}



