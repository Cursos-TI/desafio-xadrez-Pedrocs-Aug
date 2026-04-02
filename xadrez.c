#include <stdio.h>

// Função para movimentar o bispo
void MovBispo(int Mov)
{   // Verifica se ainda há movimentos restantes para o bispo
    if (Mov > 0)
    {   // Exibe o movimento do bispo para cima e para a direita
        if (Mov > 0)
        {   // Loop externo para movimentos verticais
            for (int v = 0; v < 1; v++)
            {   // Loop interno para movimentos horizontais
                printf("Cima\n");
                for (int h = 0; h < 1; h++)
                {
                    printf("Direita\n");
                }
                
            }
            
        }
        
        // Chama a função recursivamente para continuar o movimento do bispo
        MovBispo(Mov - 1);
    }
}

// Função para movimentar a torre
void MovTorre(int Mov)
{
    if (Mov > 0)
    {
        printf("Direita\n");
        // Chama a função recursivamente para continuar o movimento da torre
        MovTorre(Mov - 1);
    }
}

void MovRainha(int Mov)
{
    if (Mov > 0)
    {
        printf("Direita\n");
        // Chama a função recursivamente para continuar o movimento da rainha
        MovRainha(Mov - 1);
    }
}

// Função principal do programa
int main()
{

    // Variáveis para controlar as movimentações das peças
    int Bispo = 5, Torre = 5, Rainha = 8, Cavalo = 1;

    // Exibe os movimentos de cada peça
    printf("Movimentos do Bispo:\n");
    MovBispo(Bispo);

    // Exibe os movimentos da torre e da rainha
    printf("\nMovimentos da Torre:\n");
    MovTorre(Torre);

    // Exibe os movimentos da rainha
    printf("\nMovimentos da Rainha:\n");
    MovRainha(Rainha);

    // Usa um loop complexo para exibir os movimentos do cavalo, alternando entre cima e direita
    for (int i = 0, j = 2; i < Cavalo && j > Cavalo; i++, j--)
    {
        printf("\nMovimentos do Cavalo:\n");
        for (int k = 0; k < 3; k++)
        {
            if (k < 2)
            {
                printf("Cima\n");
            }
            else
            {
                printf("Direita\n");
            }
        }
    }

    return 0;
}
