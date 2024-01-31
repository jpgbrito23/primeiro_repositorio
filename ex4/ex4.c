#include <stdio.h>
int main()
{
    float chuva , conversao;

    printf("Indique a quantidade de chuva em mm: ");
    scanf("%f",&chuva);
    conversao = chuva / 2.54;
    printf("A quantidade de chuva em polegadas e: ");
    printf("%f",conversao);


    return 0;
}
