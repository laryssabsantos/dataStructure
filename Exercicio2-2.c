#include <stdio.h>
 
int n, contador = 0, numeros[100], pares = 0, impares_m50 = 0, impares = 0;
float media_impares = 0;
 
void impar_ou_par(int num);
void ordem_crescente(int *numeros);
 
void impar_ou_par(int num){
  if(num % 2 == 0) {
    pares++;
  } else {
    if(num > 50){
      media_impares += num;
      impares_m50++;
    }
    impares++;
  }
}
 
void ordem_crescente(int *numeros){
  int i = 0;
  int x = 0;
  int y = 0;
 
  for (i = 0; i < contador; i++) {
    for(y = i + 1; y < contador; y++){
      if (numeros[i] > numeros[y]){
        x = numeros[i];
        numeros[i] = numeros[y];
        numeros[y] = x;
      }
    }
  }
  printf("Números em ordem crescente: ");
  for(i = 0; i < contador; i++) {
    printf("%d ", numeros[i]);
  }
}
 
int main(void){
 
printf("Informe 100 números entre 0 e 256\n");
while(contador < 100){
 
printf("Número %d: \n" , contador+1);
scanf("%d", &n);
 
    if(contador < 100) {
      if(n < 256) {
        numeros[contador] = n;
        impar_ou_par(n);
      } else {
        printf("Valor não permitido\n");
      }
    }else {
      printf("Já foram inseridos 100 números\n");
    }
    contador++;
}
 
  printf("Números pares: %d \n", pares);
  printf("Números ímpares: %d \n", impares);
  printf("Números ímpares maiores que 50: %.2f \n", (media_impares/impares_m50));
  ordem_crescente(numeros);
 
}
