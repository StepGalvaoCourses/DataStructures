#include <stdio.h>
#include <stdlib.h>


int main(){
    float *nota = (float*) malloc(3*sizeof(float));
    float *media = (float*) malloc(sizeof(float));
    
    printf("Digite a primeira nota:");
    scanf("%f", &nota[0]);

    printf("Digite a segunda nota:");
    scanf("%f", &nota[1]);

    printf("Digite a terceira nota:");
    scanf("%f", &nota[2]);

    *media = (nota[0]+nota[1]+nota[2])/3;
    printf("Media = %f \n", *media);
}