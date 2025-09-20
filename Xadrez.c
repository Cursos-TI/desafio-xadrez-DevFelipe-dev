#include <stdio.h>
int main(){
// while utilizado para fazer a movimentação do bispo em vertical.//
int bispo = 1;
  printf("bispo se move: \n");
while (bispo <= 5)
{
    printf("cima: %d\n", bispo);
    printf("direita: %d\n", bispo);
    bispo++;
    
}
  // do-while utilizado para fazer a torre se locomover 5 casas a direita.//
int torre = 1;
  printf("torre se move:\n");
do
{
    printf("Direita %d\n", torre);
      torre++;
} while (torre <= 5);

// for utilizado para locomoção da rainha na direção da esquerda.//
  printf("rainha se move:\n");

for (int rainha = 0; rainha < 5; rainha++)
{
    printf("Esquerda\n");
    
}

    return 0;
}