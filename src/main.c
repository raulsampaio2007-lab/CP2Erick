#include <stdio.h>
 
int main() {
    int opcao;
    float n1 = -1, n2 = -1, media = -1;
 
    do {
        printf("\n==============================\n");
        printf("      SISTEMA EQUIPE XYZ      \n");
        printf("==============================\n");
        printf("1 - Inserir notas\n2 - Calcular media\n3 - Verificar situacao\n");
        printf("4 - Exibir resultado\n5 - Calcular derivada\n6 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
 
        if (opcao == 6) printf("Saindo...\n");
    } while (opcao != 6);
 
    return 0;
}