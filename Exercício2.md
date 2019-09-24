# dataStructure
Repositório sobre estruturas de dados em C
#include <stdio.h>
 
int main () {
   int n, i, qtd_homens = 0, qtd_mulheres  =0;
   float altura, soma_alt = 0, soma_alt_mulheres = 0, soma_alt_homens = 0, maior;
   char sexo;
 
   printf("Informe a quantidade de pessoas: ");
   scanf("%d", &n);
 
   for (i = 1; i <= n; i++) {
      printf("Informe a altura e o sexo da %dª pessoa: ", i);scanf("%f %c", &altura, &sexo);
   
      soma_alt += altura;
 
      if (i == 1)
         maior = altura;
      else if (maior < altura)
          maior = altura;
      if (sexo == 'M' || sexo == 'm'){
        qtd_homens++;
        soma_alt_homens += altura;
      }
      if (sexo == 'F' || sexo == 'f'){
         qtd_mulheres++;
         soma_alt_mulheres += altura ;
      }
   }
   printf("Altura média das n pessoas: %.2f\n", soma_alt / n);
   printf("Maior altura encontrada: %.2f\n", maior);
   printf("Altura média das mulheres: %.2f\n", soma_alt_mulheres / qtd_mulheres);
   printf("Altura média dos homens: %.2f\n", soma_alt_homens / qtd_homens);
   printf("Quantidade de homens: %d\n", qtd_homens);
   return 0;  
}
