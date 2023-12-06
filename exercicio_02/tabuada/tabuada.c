#include <stdio.h>

int main()
{
   int num1= 1;
   int tab = 1;
   int res = 0;
   printf("Digite um número: \n");
   scanf("%d",&num1);
   printf("A tabuada do numero %d é: \n",num1);
   
  int pos = 0;
  int resultado[11]; 
  resultado [pos] = 0;
 

do{
   do{
       
       res = num1*tab;
       printf(" %d * %d = %d\n", num1,tab,res);
       resultado [pos] = resultado[pos]+ res;  
       tab++;
     }while (tab <=10);
   tab = 1;
   num1++;
   pos++;
   resultado [pos] = 0;
}while ( num1 <= 10);
   
    int soma = resultado[0]+resultado[1]+resultado[2]+resultado[3]+resultado[4]+ resultado[5]+resultado[6] + resultado[7] + resultado[8] + resultado[9];
  
  
   
   printf("%d \n", resultado[0]);
   printf("%d \n", resultado[1]);
   printf("%d \n", resultado[2]);
   printf("%d \n", resultado[3]);
   printf("%d \n", resultado[4]);
   printf("%d \n", resultado[5]);
   printf("%d \n", resultado[6]);
   printf("%d \n", resultado[7]);
   printf("%d \n", resultado[8]);
   printf("%d \n", resultado[9]);
   printf(" total %d  \n", soma);
  
 

    return 0;
}
