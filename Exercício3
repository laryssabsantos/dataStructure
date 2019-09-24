
#include <stdio.h>
 
int main(void) {
  float banana_vlr = 2.50, uva_vlr = 6.50,  pessego_vlr = 10.22;
  int banana_qtd = 2, uva_qtd = 6, pessego_qtd = 10;
  float total_banana, total_uva,total_pessego, sub_total;
  float desconto, total_compra;
 
  total_banana = banana_vlr * banana_qtd;
  total_uva = uva_vlr * uva_qtd;
  total_pessego = pessego_vlr * pessego_qtd;
  sub_total = total_banana + total_uva + total_pessego;
  desconto = sub_total * 0.05;
  total_compra = sub_total + desconto;
 
  printf("Produto |Preço Unitário |Quantidade |Preço Total\n");
  printf("Banana%2s|R$ %1s%4.2f%7s|%10s%d|R$%5s%1.2f\n" ," "," ", banana_vlr, " ", " ", banana_qtd, " " , total_banana);
  printf("Uva%5s|R$ %1s%4.2f%7s|%10s%d|R$%4s%1.2f\n" , " "," ", uva_vlr, " ", " ", uva_qtd, " " , total_uva);
  printf("Pessego%1s|R$ %4.2f%7s|%9s%d|R$%3s%1.2f\n" , " ", pessego_vlr, " ", " ", pessego_qtd, " " , total_pessego);
  printf("%8s|%15s|Sub - Total|R$%3s%1.2f\n" , "" , "" , " ", sub_total);
  printf("%8s|Imposto(5%)%16s|R$%5s%1.2f\n" , "", "", " " , desconto);
  printf("%8s|%15s|Total%6s|R$%3s%1.2f\n" ," " ," " , "", " " , total_compra);
 
}
