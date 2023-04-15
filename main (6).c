//Exercício 3.2
#include <stdio.h>

float preco1(x){
  float total = (x * 0.1) + x;
  return total;
}
float preco2(x){
  float total = (x * 0.2) + x;
  return total;
}

int main(){
  float preco, total;
  printf("\nDigite o preço do produto:\t");
  scanf("%f", &preco);

  while (preco<0){
  printf("\nValor inválido, tente novamente:\n");
  printf("\nDigite o preço do produto:\t");
  scanf("%f", &preco);
  }

  if (preco<100){
    total = preco1(preco);
    printf("\n O preço do produto é: %.2f", total);
  }else{
    total = preco2(preco);
    printf("\n O preço do produto é: %.2f", total);
  }
  
  
  return 0;
}