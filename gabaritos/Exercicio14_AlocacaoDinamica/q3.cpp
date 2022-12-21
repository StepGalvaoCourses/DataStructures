#include <stdio.h>
#include <stdlib.h>


int main(){
    float *salario = (float*) malloc(sizeof(float));
    float *vendas = (float*) malloc(sizeof(float));
    float *salario_final = (float*) malloc(sizeof(float));
    printf("Digite o salário:");
    scanf("%f",salario);
    printf("Digite o total de vendas:");
    scanf("%f",vendas);
    *salario_final = (*salario) + 0.15 * (*vendas);
    printf("Salario Final = %0.2f \n", *salario_final);

}