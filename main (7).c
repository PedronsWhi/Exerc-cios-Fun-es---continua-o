//Exercício 2.2
#include <stdio.h>


void ascii() {
printf("Tabela ASCII:\n");
printf(" Dec | Hex | Char ");
for (int i = 0; i<128; i++){
printf(" %3d   0x%02x  %c\n", i, i, i);
}

}
int main() {
    ascii(); 
    return 0;
}
