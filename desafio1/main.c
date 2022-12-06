/*
Escreva um programa que peça para o usuário digitar duas variáveis inteiras (x e y) e imprima o resultado da multiplicação entre essas duas
variáveis.
*/

#include <stdio.h>

int main()
{
    int x;
    int y;

    printf("Digite o valor de x:\n");
    scanf("%i", &x);

    printf("Digite o valor de y:\n");
    scanf("%i", &y);

    printf("%i * %i = %i\n", x, y, x * y);
    
    return 0;
}