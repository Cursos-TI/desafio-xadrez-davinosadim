#include <stdio.h>
#include <string.h>

int main() 
{
    // Variáveis do tipo string sendo declaradas
    char peca_1[] = "rainha";
    char peca_2[] = "bispo";
    char peca_3[] = "torre";
    char peca_4[] = "cavalo";
    char tipo[20];
    char direcao_cavalo[20];
    char lado_cavalo[20];
    char direcao_cima[] = "cima";
    char direcao_baixo[] = "baixo";
    char lado_direito[] = "direito";
    char lado_esquerdo[] = "esquerdo";

    // Variável do tipo inteiro sendo declarada para armazenar a quantidade de casa inserida
    int casas;


   // Usuário escolhe qual peça deseja movimentar 
    printf("Qual peca deseja movimentar?: ");
    scanf("%s", tipo);

    // CONTINUAR NA IMPLEMENTAÇÃO DO FLUXO DO CÓDIGO, VOLTAR A ENTRADA INICIAL

    while (strcmp(tipo, peca_4) == 0)     
    {
        printf("Qual direcao e lado quer mover o cavalo?");
        scanf("%s", direcao_cavalo);
        scanf("%s", lado_cavalo);

        if (strcmp(direcao_cavalo, direcao_cima) == 0 && strcmp(lado_cavalo, lado_direito) == 0)
        {

            for (int i = 1; i <= 2; i++)
            {
                printf("%s\n", direcao_cima);

            }
            
            printf("%s\n", lado_direito);
            
        } else if (strcmp(direcao_cavalo, direcao_baixo) == 0 && strcmp(lado_cavalo, lado_esquerdo) == 0)
        {
            for (int i = 1; i <= 2; i++)
            {
                printf("%s\n", direcao_baixo);

            }
            
            printf("%s\n", lado_esquerdo);
        }

        break;
    }

   
    // Usuário insere a quantidade de casas a serem andadas (percorridas)
    printf("Quantas casas deseja andar: ");
    scanf("%d", &casas);

    

    // Implementação da lógica para realizar a movimentação das peças
    if ((strcmp(tipo, peca_2) == 0 || strcmp(tipo, peca_3) == 0) && casas <= 5)
    {
        if (strcmp(tipo, peca_3) == 0)
        {
            for (int i = 1; i <= casas ; i++)
            {
            printf("%s andou %d casas para a direita\n", tipo, i);
            }
        } 
        else 
        {
            for (int i = 1; i <= casas ; i++)
            {
            printf("%s andou %d casas para cima, direita\n", tipo, i);
            }
        }
    }
    else if ((strcmp(tipo, peca_1) == 0) && casas <= 8)
    {
        for (int i = 1; i <= casas ; i++)
        {
            printf("%s andou %d casas para a esquerda\n", tipo, i);
        }
    }    
    else 
    {
        printf("Quantidade de casas ou peca invalidas");
    }


    

    return 0;
}
