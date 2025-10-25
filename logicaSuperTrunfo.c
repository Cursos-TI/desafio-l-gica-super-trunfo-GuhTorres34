#include <stdio.h>

int main (){
printf ("Desafio Lógica Super Trunfo!\n");

    
    // ===============================
    // Definição das variáveis das cartas
    // ===============================
    char codigoA[] = "A01";
    char estadoA[] = "Estado A";
    char nomeA[] = "Pernambuco";
    int populacaoA = 9539029;
    float areaA = 1521.11;
    float pibA = 699.28;
    int pontosTuristicosA = 50;

    char codigoB[] = "B02";
    char estadoB[] = "Estado B";
    char nomeB[] = "Paraíba";
    int populacaoB = 4145000;
    float areaB = 1200.25;
    float pibB = 300.50;
    int pontosTuristicosB = 30;

    // ===============================
    // Exibição dos dados cadastrados
    // ===============================
    printf("=== Carta 1 ===\n");
    printf("Estado: %s\n", estadoA);
    printf("Código: %s\n", codigoA);
    printf("Nome da Cidade: %s\n", nomeA);
    printf("População: %d habitantes\n", populacaoA);
    printf("Área: %.2f km²\n", areaA);
    printf("PIB: %.2f bilhões de reais\n", pibA);
    printf("Pontos Turísticos: %d\n", pontosTuristicosA);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estadoB);
    printf("Código: %s\n", codigoB);
    printf("Nome da Cidade: %s\n", nomeB);
    printf("População: %d habitantes\n", populacaoB);
    printf("Área: %.2f km²\n", areaB);
    printf("PIB: %.2f bilhões de reais\n", pibB);
    printf("Pontos Turísticos: %d\n", pontosTuristicosB);

    // ===============================
    // Comparação das Cartas
    // ===============================
    printf("\n=== Comparação das Cartas ===\n");

    // Comparação de População
    if (populacaoA > populacaoB)
        printf("Pernambuco vence em População.\n");
    else if (populacaoB > populacaoA)
        printf("Paraíba vence em População.\n");
    else
        printf("Empate em População.\n");

    // Comparação de Área
    if (areaA > areaB)
        printf("Pernambuco vence em Área.\n");
    else if (areaB > areaA)
        printf("Paraíba vence em Área.\n");
    else
        printf("Empate em Área.\n");

    // Comparação de PIB
    if (pibA > pibB)
        printf("Pernambuco vence em PIB.\n");
    else if (pibB > pibA)
        printf("Paraíba vence em PIB.\n");
    else
        printf("Empate em PIB.\n");

    // Comparação de Pontos Turísticos
    if (pontosTuristicosA > pontosTuristicosB)
        printf("Pernambuco vence em Pontos Turísticos.\n");
    else if (pontosTuristicosB > pontosTuristicosA)
        printf("Paraíba vence em Pontos Turísticos.\n");
    else
        printf("Empate em Pontos Turísticos.\n");

    // ===============================
    // Resultado Final
    // ===============================
    int vitoriasA = 0, vitoriasB = 0;

    if (populacaoA > populacaoB) vitoriasA++; else if (populacaoB > populacaoA) vitoriasB++;
    if (areaA > areaB) vitoriasA++; else if (areaB > areaA) vitoriasB++;
    if (pibA > pibB) vitoriasA++; else if (pibB > pibA) vitoriasB++;
    if (pontosTuristicosA > pontosTuristicosB) vitoriasA++; else if (pontosTuristicosB > pontosTuristicosA) vitoriasB++;

    printf("\n=== Resultado Final ===\n");

    if (vitoriasA > vitoriasB)
        printf("A cidade vencedora é: %s (%s)\n", nomeA, estadoA);
    else if (vitoriasB > vitoriasA)
        printf("A cidade vencedora é: %s (%s)\n", nomeB, estadoB);
    else
        printf("Empate geral entre as duas cidades!\n");

    return 0;
}