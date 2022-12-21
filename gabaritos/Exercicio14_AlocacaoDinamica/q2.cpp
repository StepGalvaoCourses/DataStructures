#include <stdio.h>
#include <stdlib.h>

int main(){
    float *media = (float*) malloc(sizeof(float));
    printf("Digite a média do aluno:");
    scanf("%f",media);
    if (*media >= 7.0){
        printf("Aprovado \n");
    }else{
        printf("Reprovado \n");
    }

}