#include<stdio.h>

//assinaturas das funções
void carregarVetor(int tam);
void exibirVetor(int tam);
int calcularSomatoria(int tam);
float mediaIntervalo(int tam, int inicio, int fim);

//global: todos os setores visualizam
const int TAM=5;
int vet[TAM];

int main(){

    int resultado;
    float calcularMedia;

    carregarVetor(TAM);
    exibirVetor(TAM);

    resultado = calcularSomatoria(TAM);
    printf("somatoria = %i\n", resultado);

    calcularMedia = mediaIntervalo(5, 15, 30);

    if(calcularMedia > 0){
        printf("A media dos valores entre 15 e 30 e = %.2f\n", calcularMedia);
    }else{
        printf("Nenhum valor entre 15 e 30 foi digitado. \n");
    }

    return 0;
}

void carregarVetor(int tam){
    for(int i=0; i<tam; i++){
        printf("Digite um numero: ");
        scanf("%i",&vet[i]);
    }
}

void exibirVetor(int tam){
    for(int i=0; i<tam; i++){
        printf("No vet[%i] = %i\n", i, vet[i]);
    }
}

int calcularSomatoria(int tam){
    int soma =0;
    for(int i=0; i<tam; i++){
        soma += vet[i];
    }

    return soma;
}

float mediaIntervalo(int tam, int inicio, int fim){
    int soma = 0;
    int contador = 0;

    for(int i = 0; i < tam; i++){
        if (vet[i] >= inicio && vet[i] <= fim){
            soma += vet[i];
            contador++;
        }
    }

    if (contador == 0) {
        return 0;
    }

    return (float) soma/contador;
}