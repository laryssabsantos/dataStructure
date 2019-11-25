
 
void printar_numeros(int numeros[], int qtd_numeros);
 
void printar_desordenados(int numeros[], int qtd_numeros) {
  for(int i = 0; i < qtd_numeros; i++) {
    printf("%d ", numeros[i]);
  }
}
 
void printar_ordenados(int numeros[], int qtd_numeros) {
  for(int i = 0; i < qtd_numeros; i++) {
    printf("%dº: %d\n", i + 1, numeros[i]);
  }
}
 
int main(void) {
  int num[16] = {3, 4, 9, 2, 5, 8, 2, 1, 7, 4, 6, 2, 9, 8, 5, 1};
  int valor_minimo, valor_maximo=16, aux;
 
  printf("Sequência de números:\n");
  printar_desordenados(num, valor_maximo);
 
  for(int i = 0; i < valor_maximo; i++) {
    valor_minimo = i;
 
    for(int j = i + 1; j < valor_maximo; j++){
      if(num[j] > num[valor_minimo]) {
        valor_minimo = j;
      }
    }
 
    if(valor_minimo != i) {
      aux = num[valor_minimo];
      num[valor_minimo] = num[i];
      num[i] = aux;
    }
  }
 
  printf("\nOrdem decrescente:\n");
  printar_ordenados(num, valor_maximo);
  return 0;
}
