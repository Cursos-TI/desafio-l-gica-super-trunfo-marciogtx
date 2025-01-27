#include <stdio.h>
int main()
{
    // Definição das variáveis do super trunfo cidades.
    char cidade[20];
    char codigo[3];
    int pop, pontos_turisticos;
    float area, pib;
   
    // entrada dados das cartas
    printf("Entre o nome da cidade:\n");
    scanf("%19s", cidade);

    printf("Entre o codigo da carta:\n");
    scanf("%3s", codigo);

    printf("Entre a populacao:\n");
    scanf("%d", &pop);

    printf("Entre a Area:\n");
    scanf("%f", &area);

    printf("Entre o pib:\n");
    scanf("%f", &pib);

    printf("Entre a quantidade de pontos turisticos:\n");
    scanf("%d", &pontos_turisticos);

    // Imprime a carta

    printf("------------------------\n");
    printf("!codigo da carta: %s\n", codigo);
    printf("!cidade: %s\n", cidade);
    printf("!Populacao: %d\n",pop);
    printf("!Area: %.2f\n",area);
    printf("!Pib: %.2f\n", pib);
    printf("!pontos turisticos:%d\n",pontos_turisticos);
    printf("------------------------\n");
return 0;
}
