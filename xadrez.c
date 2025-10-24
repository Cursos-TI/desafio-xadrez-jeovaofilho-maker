#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Nível Novato - Movimentação das Peças
// Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

// Implementação de Movimentação da Torre
// Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a Direita.

// Implementação de Movimentação do Bispo
// Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

// Implementação de Movimentação da Rainha
// Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

// Nível Aventureiro - Movimentação do Cavalo
// Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
// Um loop pode representar a movimentação horizontal e outro vertical.

// Nível Mestre - Funções Recursivas e Loops Aninhados
// Sugestão: Substitua as movimentações das peças por funções recursivas.
// Exemplo: Crie uma função recursiva para o movimento do Bispo.

// Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
// Inclua o uso de continue e break dentro dos loops.

//Jeová Ricardo

int main(){
    // Implementação de Movimentação da Torre
    // Torre move 5 casas para a direita
    printf("## Desafio Jogo de Xadrez ##\n");
    printf("\n## Torre move 5 casas para direita ##\n");
    for(int i = 0; i < 5; i++){
        printf("Direita.\n");
     }
    
    // Implementação de Movimentação do Bispo
    // Bispo move 5 casas em diagonal superior para a direita
    printf("\n## Bispo move 5 casas em diagonal superior a direita ##\n");
    for(int i = 0; i < 10; i++){
        if(i % 2 == 0){
            printf("Cima - ");
        } else if(i % 2 !=0){
            printf("Direita.\n");
        }
    }

    // Implementação de Movimentação da Rainha
    // Rainha move 8 casas para a esquerda
    printf("\n## Rainha move 8 casas para esquerda ##\n");
    for(int i = 0; i < 8; i++){
        printf("Esquerda.\n");
     }

    // Implementação de Movimentação do Cavalo
    // Cavalo move 2 casas para baixo e 1 para a esquerda
    printf("\n## Cavalo move 2 casas para baixo e 1 para esquerda ##\n");
    int movimentol = 1;
    
    while (movimentol--){
        for(int i = 0; i < 2; i++){
            printf("Baixo - ");
    }
    printf("Esquerda.\n");
   }



    return 0;
}