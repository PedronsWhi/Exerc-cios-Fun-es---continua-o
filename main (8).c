#include <stdio.h>

float opcao1(float valor){
  float valorfinal = valor-(0.1*valor);
  return valorfinal;
}

float opcao2(float valor){
  float valorfinal = valor/2;
  return valorfinal;
}

float opcao3(float valor, int parcela){
  float valorfinal = 0;
  float p1 = valor/parcela;
  valor = valor/parcela;

  for(int i = 2; i <= parcela; i++){
    valor = valor + (valor*0.03);
    valorfinal = valorfinal + valor;
  }
  valorfinal = valorfinal + p1;
  return valorfinal;
}

void parcelamento(float valor, int parcela){
 
  float p1 = valor/parcela;
  valor = valor/parcela;
  printf("\n1-parcela: %.2f\n", p1);
  for(int i = 2; i <= parcela; i++){
    valor = valor + (valor*0.03);
    
    printf("\n%d-parcela: %.2f\n", i,valor);

  }

}

int main(){
float preco, precofinal;
int parcelas;

printf("\nDigite o valor da compra:\t");
scanf("%f", &preco);

while(preco<0){
  printf("\nNúmero inválido, digite outro valor:\t");
  scanf("%f", &preco);
}

printf("\nPara valores de até 100.00, você pode pagar a vista ou parcelado em duas vezes com o preço da etiqueta. Para valores acima de 100.00, é possível parcelar até 10 vezes com juros de   3 porcento ao mês\n");
if(preco<=100){

printf("\nDeseja parcelar o valor de %.2f em quantas vezes?\t", preco);
scanf("%d", &parcelas);

 while(parcelas>2||parcelas<1){
   printf("\nPara valores de até 100.00, você só pode pagar a vista ou parcelado em duas vezes com o preço da etiqueta, tente novamente:\t");
   printf("\nDeseja parcelar o valor de %.2f em quantas vezes?\t", preco);
scanf("%d", &parcelas);
 }
  if(parcelas == 1){
    precofinal = opcao1(preco);
    printf("O total da compra é %.2f", precofinal);
  }else if(parcelas == 2){
    precofinal = opcao2(preco);
    printf("\nO total da compra é %.2f", preco);
    printf("\nA compra será realizada em duas parcelas de %.2f", precofinal);
    
  }
}else{
  printf("\nDeseja parcelar o valor de %.2f em quantas vezes?\t", preco);
  scanf("%d", &parcelas);

  while(parcelas<1|| parcelas>10){
   printf("\nValor inválido, tente novamente:\t");
   printf("\nDeseja parcelar o valor de %.2f em quantas vezes?\t", preco);
scanf("%d", &parcelas);
 }
  if(parcelas == 1){
    precofinal = opcao1(preco);
    printf("O total da compra é %.2f", precofinal);
  }else if(parcelas == 2){
    precofinal = opcao2(preco);
    printf("\nO total da compra é %.2f", preco);
    printf("\nA compra será realizada em duas parcelas de %.2f", precofinal);
    
  }else{
    precofinal = opcao3(preco, parcelas);
    printf("\nO valor total da compra é de %.2f\n", precofinal);
    printf("\nSeguem as parcelas a serem pagas:\n");
    parcelamento(preco,parcelas);
    
    
    
    
  }

  return 0;
}
}