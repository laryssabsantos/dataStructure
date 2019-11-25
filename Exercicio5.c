
#include <stdio.h>
 
int buscaBinaria(int vetor[], int chave, int tamanho);
 
int buscaBinaria(int vetor[], int chave, int tamanho){
  int lim_inf = 0;
  int lim_sup = tamanho - 1;
  int miolo;
 
  miolo = (lim_inf + lim_sup)/2;
  ;
 
  if(chave == vetor[miolo]){
    return vetor[chave];
  }else{
    if(chave < vetor[miolo]){
      tamanho -= 1;
      return buscaBinaria(vetor, chave, tamanho);
    }else{
      tamanho +=1;
      return buscaBinaria(vetor, chave, tamanho);
    }
}
  return -1;
}
 
int main(void) {
  int vetor[] = {2, 4, 6, 8, 10, 12, 16, 18, 20, 30, 50};
  int chave = 8;
  int tamanho = sizeof(vetor) / sizeof((vetor)[0]);
 
  printf("%d",  buscaBinaria(vetor, chave, tamanho));
 
  return 0;
}
