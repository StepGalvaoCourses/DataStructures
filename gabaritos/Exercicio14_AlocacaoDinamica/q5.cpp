#include <stdio.h>
#include <stdlib.h>

//Tamanho do vetor que armazena as notas
int TAMANHO = 10;
// Vetor que armazena as notas
float *notas = (float*) malloc(TAMANHO*sizeof(float));
//Proxima posição vaga no vetor
int prox = 0;


/**
* Copia o conteúdo da função de origem para a função
* de destino. 
*
* dest: vetor de destino do conteúdo
* orig: vetor de origem do conteúdo
* tam: tamanho do vetores.
*
*/
void copiarVetor(float *dest, float *orig, int tam ){
    for(int i=0; i<tam;i++){
        dest[i] = orig[i];
    }
}
/**
 * Aumenta o vetor de notas em 10 posições, quando ele chega no limite.
 * 
 */
void aumentarVetor(){
    // Tamanho do novo vetor de notas
    int novoTam = TAMANHO+10; 
    //Novo vetor de notas
    float *novo = (float*) malloc(novoTam*sizeof(float));  
    //Tranfere as notas do vetor "notas" para "novo"
    copiarVetor(novo,notas,TAMANHO); 
    // Faz "notas" apontar para o vetor "novo"
    notas = novo;
    // Atualiza a variável que diz o tamanho do vetor de notas
    TAMANHO = novoTam;
}


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


    /*
    * Aumenta o tamanho do vetor notas que não houver
    * mais posições vazias
    */ 
    if(prox==TAMANHO){
        aumentarVetor();
    }
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
    printf("Fim do Programa");
}