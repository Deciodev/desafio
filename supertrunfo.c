#include <stdio.h>

int main() {
    
    char estado1[50] = "São Paulo";
    char cidade1[50] = "São Bernardo do Campo";
    char codigo1[10] = "A01";
    int populacao1 = 1000000;
    float area1 = 100.5;
    float pib1 = 5000000.0;
    int turismo1 = 100;

    char estado2[50] = "Rio de Janeiro";
    char cidade2[50] = "Rio de Janeiro";
    char codigo2[10] = "B02";
    int populacao2 = 2000000;
    float area2 = 200.5;
    float pib2 = 10000000.0;
    int turismo2 = 200;
    
//carta 1
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Turismo: %d\n", turismo1);

//carta 2
    printf("\n");
    printf("CARTA2\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Turismo: %d\n", turismo2);

    return 0;

    
}