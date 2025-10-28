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
//Desafio xadrez
void mensagem(){
    printf("## Desafio Jogo de Xadrez ##\n");
}

//Movimento torre
void movertorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        movertorre(casas - 1);
    }
}

//Movimento bispo
void moverbispo(int casas) {
    if (casas > 0) {
        printf("Cima - Direita\n");
    moverbispo(casas - 1);
    }
}

//Movimento rainha
void moverrainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverrainha(casas - 1);
    }
}

int main(){
    // Implementação de Movimentação da Torre
    // Torre move 5 casas para a direita
    int torre, bispo, rainha;

    mensagem();
    printf("\nDigite quantas casas a torre se movimenta: ");
    scanf("%d", &torre);
    printf("## Torre move %d casas para direita ##\n", torre);
    movertorre(torre);

    // Implementação de Movimentação do Bispo
    printf("\nDigite quantas casas o bispo se movimenta: ");
    scanf("%d", &bispo);
    printf("## Bispo move %d casas em diagonal superior a direita ##\n", bispo);
    moverbispo(bispo);

    // Implementação de Movimentação da Rainha
    printf("\nDigite quantas casas a rainha se movimenta: ");
    scanf("%d", &rainha);
    printf("## Rainha move %d casas para esquerda ##\n", rainha);
    moverrainha(rainha);
        
    // Implementação de Movimentação do Cavalo
    int opcao;
    int movimentol = 1;

    printf("\nCavalo move em L.\n");
    printf("Escolha qual movimento dedeja:\n");
    printf("1. Cima - Cima - Direita.\n");
    printf("2. Cima - Cima - Esquerda.\n");
    printf("3. Cima - Direita - Direita.\n");
    printf("4. Cima - Esquerda - Esquerda.\n");
    printf("5. Baixo - Baixo - Direita.\n");
    printf("6. Baixo - Baixo - Esquerda.\n");
    printf("7. Baixo - Direita - Direita.\n");
    printf("8. Baixo - Esquerda - Esquerda.\n");
    printf("Opção escolhida: ");
    scanf("%d", &opcao);
    
    switch(opcao){
         case 1:
        printf("\n## Cavalo move 2 casas para cima e 1 casa para direita. ##\n");
        while (movimentol--){
        for(int i = 0; i < 2; i++){
        if(i == 0){
            printf("Cima - "); continue;
        }
        if(i == 1){
            printf("Cima - "); break;
        }
        printf("\n");
        }
        printf("Direita.\n");
    }       
        break;
         case 2:
        printf("\n## Cavalo move 2 casas para cima e 1 casa para esquerda. ##\n");
        while (movimentol--){
        for(int i = 0; i < 2; i++){
        if(i == 0){
            printf("Cima - "); continue;
        }
        if(i == 1){
            printf("Cima - "); break;
        }
        printf("\n");
        }
        printf("Esquerda.\n");
    }   
        break;
         case 3:
        printf("\n## Cavalo move 1 casa para cima e 2 casas para direita. ##\n");
        while (movimentol--){
        for(int i = 0; i < 2; i++){
        if(i == 0){
            printf("Cima - "); continue;
        }
        if(i == 1){
            printf("Direita - "); break;
        }
        printf("\n");
        }
        printf("Direita.\n");
    }   
        break;
         case 4:
        printf("\n## Cavalo move 1 casa para cima e 2 casas para esquerda. ##\n");
        while (movimentol--){
        for(int i = 0; i < 2; i++){
        if(i == 0){
            printf("Cima - "); continue;
        }
        if(i == 1){
            printf("Esquerda - "); break;
        }
        printf("\n");
        }
        printf("Esquerda.\n");
    }   
        break;
         case 5:
        printf("\n## Cavalo move 2 casas para baixo e 1 casa para direita. ##\n");
        while (movimentol--){
        for(int i = 0; i < 2; i++){
        if(i == 0){
            printf("Baixo - "); continue;
        }
        if(i == 1){
            printf("Baixo - "); break;
        }
        printf("\n");
        }
        printf("Direita.\n");
    }   
        break;
         case 6:
        printf("\n## Cavalo move 2 casas para baixo e 1 casa para esquerda. ##\n");
        while (movimentol--){
        for(int i = 0; i < 2; i++){
        if(i == 0){
            printf("Baixo - "); continue;
        }
        if(i == 1){
            printf("Baixo - "); break;
        }
        printf("\n");
        }
        printf("Esquerda.\n");
    }   
        break;
         case 7:
        printf("\n## Cavalo move 1 casa para baixo e 2 casas para direita. ##\n");
        while (movimentol--){
        for(int i = 0; i < 2; i++){
        if(i == 0){
            printf("Baixo - "); continue;
        }
        if(i == 1){
            printf("Direita - "); break;
        }
        printf("\n");
        }
        printf("Direita.\n");
    }   
        break;
         case 8:
        printf("\n## Cavalo move 1 casa para baixo e 2 casas para esquerda. ##\n");
        while (movimentol--){
        for(int i = 0; i < 2; i++){
        if(i == 0){
            printf("Baixo - "); continue;
        }
        if(i == 1){
            printf("Esquerda - "); break;
        }
        printf("\n");
        }
        printf("Esquerda.\n");
    }   
        break;
        default:
        printf("Opção inválida.\n");
    }

return 0;
}