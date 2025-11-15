#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.
// Nível Novato - Posicionamento dos Navios
// Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
// Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
// Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

int main() {

    int i, j;
    int tabuleiro[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
                tabuleiro[i][j] = 0; 
    }
}

// POSIÇÃO DOS NAVIOS

int n1_lin_inicio = 2; // Posição de início: Linha 2, 
int n1_col_inicio = 2; // Posição de início: Coluna 2 
int n1_tamanho = 3; // Tamanho

// Verificação se cabe verticalmente:
if (n1_lin_inicio + n1_tamanho <= 10) {
    // 2. Verificar sobreposição
    
    // 3. Posicionar o navio 
    for (i = 0; i < n1_tamanho; i++) {
        tabuleiro[n1_lin_inicio + i][n1_col_inicio] = 3; 
    }
}

// Navio 2: Horizontal 

int n2_lin_inicio = 7; // Posição de início: Linha 7
int n2_col_inicio = 5; // Posição de início: Coluna 5 
int n2_tamanho = 3; // Tamanho

// 1. Verificar se cabe horizontalmente:
if (n2_col_inicio + n2_tamanho <= 10) {

    int pode_posicionar = 1; //Verificação de sobreposição
    for (j = 0; j < n2_tamanho; j++) {
        if (tabuleiro[n2_lin_inicio][n2_col_inicio + j] != 0) {
            pode_posicionar = 0; // Caso encontre sobreposição
            break;
        }
    }
    
    // Posicionar o navio
    if (pode_posicionar) {
        for (j = 0; j < n2_tamanho; j++) {
            tabuleiro[n2_lin_inicio][n2_col_inicio + j] = 3;
        }
    }
}
// ------------------------------------
printf("TABULEIRO BATALHA NAVAL:\n");
    printf("    "); // Espaço para alinhar com o índice da linha
    for (j = 0; j < 10; j++) {
        // Imprime o cabeçalho da coluna (Ex: A é ASCII 65)
        printf(" %c |", 'A' + j); 
    }
    printf("\n"); // Quebra de linha após o cabeçalho

    // Loop para exibir as linhas
    for (i = 0; i < 10; i++) {
        
        printf(" %d |", i); 
        // Loop interno para exibir os elementos da linha
        for (j = 0; j < 10; j++) {
            printf(" %d |", tabuleiro[i][j]);
        }
        printf("\n"); // Quebra de linha após a linha completa
        
    };

    return 0;
}
