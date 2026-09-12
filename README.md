# Vetor em C — Somatória e Média de Intervalo

Exercício em linguagem C desenvolvido para praticar conceitos de **vetores**, **variáveis globais** e **funções** (com parâmetros e retorno).

## Descrição

O programa:

1. Lê 5 números inteiros digitados pelo usuário e os armazena em um vetor global.
2. Exibe os valores armazenados, indicando a posição de cada um no vetor.
3. Calcula e exibe a **somatória** de todos os elementos do vetor.
4. Calcula a **média** dos valores do vetor que estejam dentro de um intervalo pré-definido (entre 15 e 30). Caso nenhum valor esteja nesse intervalo, informa que não há valores para calcular a média.

## Conceitos praticados

- Vetores (arrays) em C
- Variáveis globais compartilhadas entre funções
- Declaração de protótipos de funções
- Passagem de parâmetros e retorno de valores
- Estruturas de repetição (`for`)
- Estruturas condicionais (`if`/`else`)
- Formatação de saída com `printf` e leitura com `scanf`

## Estrutura do código

| Função | Descrição |
|---|---|
| `carregarVetor(int tam)` | Lê `tam` valores digitados pelo usuário e preenche o vetor global. |
| `exibirVetor(int tam)` | Exibe cada posição do vetor e seu respectivo valor. |
| `calcularSomatoria(int tam)` | Retorna a soma de todos os elementos do vetor. |
| `mediaIntervalo(int tam, int inicio, int fim)` | Retorna a média dos elementos do vetor que estão entre `inicio` e `fim`. Retorna `0` se nenhum elemento estiver no intervalo. |
