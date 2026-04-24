#include <stdio.h>

void inserirNotas(float *n1, float *n2)
{

    printf("Digite a nota 1: ");

    scanf("%f", n1);

    printf("Digite a nota 2: ");

    scanf("%f", n2);

    printf("Notas salvas!\n");
}

float calcularMedia(float n1, float n2)
{

    return (n1 + n2) / 2.0;
}

int main()
{
    int opcao;
    float n1 = -1, n2 = -1, media = -1;

    do
    {
        printf("\n==============================\n");
        printf("      SISTEMA EQUIPE XYZ      \n");
        printf("==============================\n");
        printf("1 - Inserir notas\n2 - Calcular media\n3 - Verificar situacao\n");
        printf("4 - Exibir resultado\n5 - Calcular derivada\n6 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            inserirNotas(&n1, &n2);
            break;
        case 2:
            if (n1 != -1)
            {
                media = calcularMedia(n1, n2);
                printf("Media calculada: %.2f\n", media);
            }
            else
                printf("Erro: Insira as notas primeiro!\n");
            break;
        }
        if (opcao == 6)
            printf("Saindo...\n");
    } while (opcao != 6);

    return 0;
}