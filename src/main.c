#include <stdio.h>
 
void calcularMedia() {
    float n1, n2, media;
    printf("Nota 1: "); scanf("%f", &n1);
    printf("Nota 2: "); scanf("%f", &n2);
    media = (n1 + n2) / 2.0;
    if (media >= 7) printf("Status: Aprovado\n");
    else if (media >= 5) printf("Status: Exame\n");
    else printf("Status: Reprovado\n");
}
 
int main() {
  
    return 0;
}