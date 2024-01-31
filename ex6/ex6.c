#include <stdio.h>

int main()
{
    float vendidos , salario;
    printf("Quantos carros o funcionario vendeu no mes: ");
    scanf("%f",&vendidos);
    salario = 350 + vendidos*200;
    printf("O salario do vendedor esse mes foi: ");
    printf("%f",salario);
    return 0;
}
