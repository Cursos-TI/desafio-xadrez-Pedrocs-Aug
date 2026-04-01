#include <stdio.h>

// Função principal do programa
int main()
{

    // Variáveis para controlar as movimentações das peças
    int Bispo = 0, Torre = 0, Rainha = 0, Cavalo = 0;

    // Movimentação do Bispo
    printf("Movimentação do Bispo:\n");
    while (Bispo < 5)
    {
        printf("Cima\n");
        printf("Direita\n");
        Bispo++;
    }

    // Movimentação da Torre
    printf("\nMovimentação da Torre:\n");
    do
    {
        printf("Direita\n");
        Torre++;
    } while (Torre < 5);

    // Movimentação da Rainha
    printf("\nMovimentação da Rainha:\n");
    for (Rainha; Rainha < 8; Rainha++)
    {
        printf("Esquerda\n");
    }

    // Movimentação do Cavalo
    printf("\nMovimentação do Cavalo:\n");
    // O Cavalo tem um movimento especial em "L", então vamos simular isso com um loop DO-While para mostrar a movimentação única do Cavalo. Ele se move duas casas em uma direção e depois uma casa perpendicularmente.
    while (Cavalo < 1)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Cima\n");
        }
        printf("Direita\n");
        Cavalo++;
    }
    

    return 0;
}
