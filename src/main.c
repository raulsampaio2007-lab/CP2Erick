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
void verificarSituacao(float media) {
    if (media >= 7.0) printf("Situacao: APROVADO\n");
    else if (media >= 5.0) printf("Situacao: EXAME\n");
    else printf("Situacao: REPROVADO\n");
}

// No switch do main:
case 3:
    if (media != -1) verificarSituacao(media);
    else printf("Erro: Calcule a media primeiro!\n");
    break;
case 4:
    if (media != -1) {
        printf("\nRESULTADO: Notas %.1f e %.1f | Media: %.1f\n", n1, n2, media);
        verificarSituacao(media);
    } else printf("Nao ha resultados.\n");
    break;
    return 0;
}