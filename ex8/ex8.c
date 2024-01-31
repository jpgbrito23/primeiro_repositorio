#include <stdio.h>

int main()
{
    float cf , impostos;
    printf("Informe o custo de fabrica: ");
    scanf("%f",&cf);
    impostos = cf * 1.57;
    printf("O valor do carro e: ");
    printf("%f",impostos);
    return 0;
}
