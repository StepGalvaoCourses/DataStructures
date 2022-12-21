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

void adicionar(float nota){
    notas[prox] = nota;
    prox++;
}

void aumentarVetor(){
    int *tmp = (float*) malloc(TAMANHO*sizeof(float));

    for(int i=0; i<TAMANHO;i++){
        tmp[i] = notas[i];
    }

    free(notas);

    
}


int main(){

    
}