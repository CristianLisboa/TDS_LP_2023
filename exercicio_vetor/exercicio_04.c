#include <stdio.h>

int main()
{
    int numeros[5];
    int maior= 0 ;
    int menor= 500;
    int i = 0;
    int pos = 0;
    int pos2= 0;
    
    for( int i = 0; i<=4; i++ ){
        printf("Digite o valor para a posição %d \n", i+1);
        scanf("%d", &numeros[i]);
        if (numeros[i]< menor){
            menor = numeros[i];
            pos = i;
            
        }if(numeros[i]> maior){
            maior = numeros[i];
            pos2 = i;
            
          
        }
    }
    printf(" o MENOR vetor é o da posição: %d \n", pos+1);
    printf(" o MAIOR vetor é o da posição: %d \n", pos2+1);
    
    
    
    

    return 0;
}


