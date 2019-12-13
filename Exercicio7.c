#include <stdio.h>
#include <stdlib.h>
 
int main(){
 
int numeros[16] = {3, 4, 9, 2, 5, 8, 2, 1, 7, 4, 6, 2, 9, 8, 5, 1};
int i, aux, contador, valor_maximo = 16;
 
printf("Sequência de números:\n");
for (i = 0; i < valor_maximo; i++) {
 printf("%d ", numeros[i]);
}
 
// Algoritmo de ordenação Bubblesort:
 for (contador = 1; contador < valor_maximo; contador++) {
   for (i = 0; i < valor_maximo - 1; i++) {
     if (numeros[i] < numeros[i + 1]) {
       aux = numeros[i];
       numeros[i] = numeros[i + 1];
       numeros[i + 1] = aux;
     }
   }
 }
 
printf("\nOrdem decrescente:\n");
for (i = 0; i < valor_maximo; i++) {
 printf("%dº: %d\n", i +1, numeros[i]);
}
return 0;
}
