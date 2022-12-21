#include <stdio.h>
#include <stdlib.h>

//Tamanho do vetor que armazena as notas
int TAMANHO = 10;
// Vetor que armazena as notas
float *notas = (float*) malloc(TAMANHO*sizeof(float));
//Proxima posição vaga no vetor
int prox = 0;



void exibirNota(){
    for (int i = 0; i < prox; i++){
        printf("%f \n",notas[i]);
    }
}

/**
 * @brief Adiciona uma nota no vetor de notas e 
 * atualiza a próxima posição vazia do vetor
 * 
 * @param nota : nota que será adicionada no vetor
 */
void adicionar(float nota){
    notas[prox] = nota;
    prox++;
}

float calcularMedia(){
    float soma =0;
    for(int i=0; i<prox;i++){
        soma += notas[i];
    }
    return soma/(float )prox;
}


int main(){
    int entrada = 1;
    float nota = 0;
    float media = 0;
    while (entrada != 0){
        printf("**************************MENU******************************\n");
        printf("1 - Adicionar nota \n");
        printf("2 - Calcular media \n");
        printf("3 - Exibir notas \n");
        printf("0 - Sair \n");
        printf("Escolha uma opção:");
        scanf("%d",&entrada);
        printf("**************************************************************\n");
        switch (entrada){
            case 1:
                printf("Digite a nota:");
                scanf("%f", &nota);
                adicionar(nota);
                break;
            case 2:
                media = calcularMedia();
                printf("Media = %0.2f \n", media);
                break;
            case 3:
                exibirNota();
                break;
            case 0:
                 printf("Saindo do programa....\n");
                 break;
            default:
                printf("Opção inválida \n");
        }
        printf("***************************************************************\n");
    }
    printf("Fim do Programa\n");
}