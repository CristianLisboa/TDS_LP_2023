#include <stdio.h>

int main()
{
    int numeros[7];
    int i = 0;
    int j = 0;
    
    for( int i = 0; i<=7; i++ ){
        printf("Digite o valor para a posição %d em em seguida digite enter: \n", i);
        scanf("%d", &numeros[i]);
   }
   
        printf("Escolha duas posições do vetor: \n");
        scanf("%d", &i);
        printf("Mais uma: \n");
        scanf("%d", &j);
        
        printf("A soma da posição %d e da posição %d é: %d \n", i, j, numeros[i]+numeros[j]);
        
        

    return 0;
}
