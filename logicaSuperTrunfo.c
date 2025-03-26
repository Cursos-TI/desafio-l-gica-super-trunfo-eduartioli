#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis para os dados das cartas 
    char crt1_estado, crt2_estado;
    char crt1_codigo[4], crt2_codigo[4];
    char crt1_nomeCidade[50], crt2_nomeCidade[50];
    unsigned long int crt1_populacao, crt2_populacao;
    float crt1_area, crt2_area;
    float crt1_pib, crt2_pib;
    int crt1_numPontosTuristicos, crt2_numPontosTuristicos;
    int escolha;

    // Leitura dos dados da Carta 1
    printf("Digite os dados da Carta 1:\n");

    printf("Digite o Estado (Letras de A até H): ");
    scanf(" %c", &crt1_estado); // Adicionado espaço para consumir o '\n' deixado pelo buffer. Mudança aqui, pesquisa 20.03.2025

    printf("Código da Carta contendo a Letra da Carta acrescido de um numero de 01 a 04 (ex: A01): ");
    scanf("%s", &crt1_codigo);

    printf("Nome da Cidade: ");
    scanf(" %s", crt1_nomeCidade); // Adicionado espaço para consumir o '\n' deixado pelo buffer. Mudança aqui, pesquisa 20.03.2025

    printf("População: ");
    scanf("%d", &crt1_populacao);

    printf("Área (em km²): ");
    scanf("%f", &crt1_area);

    printf("PIB de %s: ", &crt1_nomeCidade);
    scanf("%f", &crt1_pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &crt1_numPontosTuristicos);

    printf("\n"); // Adiciona uma linha em branco para separar as entradas


    // Leitura dos dados da Carta 2
    printf("Digite os dados da Carta 2:\n");

    printf("Digite o Estado (Letras de A até H): ");
    scanf(" %c", &crt2_estado); // Adicionado espaço para consumir o '\n' deixado pelo buffer. Mudança aqui, pesquisa 20.03.2025

    printf("Código da Carta contendo a Letra da Carta acrescido de um numero de 01 a 04 (ex: B01): ");
    scanf("%s", &crt2_codigo);

    printf("Nome da Cidade: ");
    scanf(" %s", crt2_nomeCidade); // Adicionado espaço para consumir o '\n' deixado pelo buffer. Mudança aqui, pesquisa 20.03.2025

    printf("População: ");
    scanf("%d", &crt2_populacao);

    printf("Área (em km²): ");
    scanf("%f", &crt2_area);

    printf("PIB de %s: ", &crt2_nomeCidade);
    scanf("%f", &crt2_pib);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &crt2_numPontosTuristicos);

    printf("\n"); // Adiciona uma linha em branco para separar as saídas

    // Desafio: nível mestre
    // Nova declaracao de variaveis.
    float crt1_DensiPopula, crt2_DensiPopula;
    float crt1_pibPerCapita, crt2_pibPerCapita;
    float crt1_superPoder, crt2_superPoder;

    // inclusao das formulas apos a entrada de dados, pois antes disso os resultados sao apresentados
    // de forma divergente todas as vezes, pois ficam lixos de memoria nas variaveis
    crt1_DensiPopula = (float)crt1_populacao / crt1_area;
    crt1_pibPerCapita = crt1_pib / crt1_populacao;
    crt1_superPoder = (float)crt1_populacao + crt1_area + crt1_pib + crt1_numPontosTuristicos + crt1_pibPerCapita + (1.0 / crt1_DensiPopula);

    crt2_DensiPopula = (float)crt2_populacao / crt2_area;
    crt2_pibPerCapita = crt2_pib / crt2_populacao;
    crt2_superPoder = (float)crt2_populacao + crt2_area + crt2_pib + crt2_numPontosTuristicos + crt2_pibPerCapita + (1.0 / crt2_DensiPopula);

    // Menu Interativo para poder fazer a escolha
    printf("### Escolha um atributo para a comparação: ###\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB per Capita\n");
    scanf("%d", &escolha);
    
    // Comparação de atributos de acordo com a escolha
    switch (escolha) {
        case 1: // População
            printf("\nComparação de População:\n");
            printf("Carta 1 - %s: %lu\n", crt1_nomeCidade, crt1_populacao);
            printf("Carta 2 - %s: %lu\n", crt2_nomeCidade, crt2_populacao);
            if (crt1_populacao > crt2_populacao) {
                printf("Resultado: Carta 1 (%s) venceu!\n", crt1_nomeCidade);
            } else if (crt1_populacao < crt2_populacao) {
                printf("Resultado: Carta 2 (%s) venceu!\n", crt2_nomeCidade);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 2: // Área
            printf("\nComparação de Área:\n");
            printf("Carta 1 - %s: %.2f km²\n", crt1_nomeCidade, crt1_area);
            printf("Carta 2 - %s: %.2f km²\n", crt2_nomeCidade, crt2_area);
            if (crt1_area > crt2_area) {
                printf("Resultado: Carta 1 (%s) venceu!\n", crt1_nomeCidade);
            } else if (crt1_area < crt2_area) {
                printf("Resultado: Carta 2 (%s) venceu!\n", crt2_nomeCidade);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 3: // PIB
            printf("\nComparação de PIB:\n");
            printf("Carta 1 - %s: %.2f\n", crt1_nomeCidade, crt1_pib);
            printf("Carta 2 - %s: %.2f\n", crt2_nomeCidade, crt2_pib);
            if (crt1_pib > crt2_pib) {
                printf("Resultado: Carta 1 (%s) venceu!\n", crt1_nomeCidade);
            } else if (crt1_pib < crt2_pib) {
                printf("Resultado: Carta 2 (%s) venceu!\n", crt2_nomeCidade);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 4: // Número de Pontos Turísticos
            printf("\nComparação de Pontos Turísticos:\n");
            printf("Carta 1 - %s: %d\n", crt1_nomeCidade, crt1_numPontosTuristicos);
            printf("Carta 2 - %s: %d\n", crt2_nomeCidade, crt2_numPontosTuristicos);
            if (crt1_numPontosTuristicos > crt2_numPontosTuristicos) {
                printf("Resultado: Carta 1 (%s) venceu!\n", crt1_nomeCidade);
            } else if (crt1_numPontosTuristicos < crt2_numPontosTuristicos) {
                printf("Resultado: Carta 2 (%s) venceu!\n", crt2_nomeCidade);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 5: // Densidade Demográfica
            printf("\nComparação de Densidade Demográfica:\n");
            printf("Carta 1 - %s: %.2f hab/km²\n", crt1_nomeCidade, crt1_DensiPopula);
            printf("Carta 2 - %s: %.2f hab/km²\n", crt2_nomeCidade, crt2_DensiPopula);
            if (crt1_DensiPopula < crt2_DensiPopula) {
                printf("Resultado: Carta 1 (%s) venceu!\n", crt1_nomeCidade);
            } else if (crt1_DensiPopula > crt2_DensiPopula) {
                printf("Resultado: Carta 2 (%s) venceu!\n", crt2_nomeCidade);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
        case 6: // PIB per Capita
            printf("\nComparação de PIB per Capita:\n");
            printf("Carta 1 - %s: %.2f\n", crt1_nomeCidade, crt1_pibPerCapita);
            printf("Carta 2 - %s: %.2f\n", crt2_nomeCidade, crt2_pibPerCapita);
            if (crt1_pibPerCapita > crt2_pibPerCapita) {
                printf("Resultado: Carta 1 (%s) venceu!\n", crt1_nomeCidade);
            } else {
                printf("Resultado: Carta 2 (%s) venceu!\n", crt2_nomeCidade);
            }
        }
    return 0;
}