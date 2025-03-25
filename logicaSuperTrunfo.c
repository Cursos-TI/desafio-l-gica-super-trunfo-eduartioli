#include <stdio.h>

int main() {
    // Variáveis para os dados das cartas 
    // alteracao dia 21.03.2025
    char crt1_estado, crt2_estado;
    char crt1_codigo[4], crt2_codigo[4];
    char crt1_nomeCidade[50], crt2_nomeCidade[50];
    unsigned long int crt1_populacao, crt2_populacao;
    float crt1_area, crt2_area;
    float crt1_pib, crt2_pib;
    int crt1_numPontosTuristicos, crt2_numPontosTuristicos;

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

    // Exibição dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", crt1_estado);
    printf("Código: %s\n", crt1_codigo);
    printf("Nome da Cidade: %s\n", crt1_nomeCidade);
    printf("População: %lu habitantes\n", crt1_populacao);// Exibição como unsigned long int
    printf("Área: %.2f km²\n", crt1_area);
    printf("PIB: %.2f de reais\n", crt1_pib);
    printf("Número de Pontos Turísticos: %d\n", crt1_numPontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", crt1_DensiPopula);
    printf("PIB per Capita: %.2f reais/hab\n", crt1_pibPerCapita);
    printf("Super Poder: %.2f\n", crt1_superPoder);

    printf("\n");

    // Exibição dos dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", crt2_estado);
    printf("Código: %s\n", crt2_codigo);
    printf("Nome da Cidade: %s\n", crt2_nomeCidade);
    printf("População: %lu habitantes\n", crt2_populacao);// Exibição como unsigned long int
    printf("Área: %.2f km²\n", crt2_area);
    printf("PIB: %.2f de reais\n", crt2_pib);
    printf("Número de Pontos Turísticos: %d\n", crt2_numPontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", crt2_DensiPopula);
    printf("PIB per Capita: %.2f reais/hab\n", crt2_pibPerCapita);
    printf("Super Poder: %.2f\n", crt2_superPoder);

    printf("\n");

    // Comparação das cartas
    // Desafio: nível mestre
    //printf("População: %s (%d)\n", crt1_populacao > crt2_populacao ? "Carta 1 venceu" : "Carta 2 venceu" , crt1_populacao > crt2_populacao);
    //printf("Área: %s (%d)\n", crt1_area > crt2_area ? "Carta 1 venceu" : "Carta 2 venceu" , crt1_area > crt2_area);
    //printf("PIB: %s (%d)\n", crt1_pib > crt2_pib ? "Carta 1 venceu" : "Carta 2 venceu" , crt1_pib > crt2_pib);
    //printf("Número de Pontos Turísticos: %s (%d)\n", crt1_numPontosTuristicos > crt2_numPontosTuristicos ? "Carta 1 venceu" : "Carta 2 venceu" , crt1_numPontosTuristicos > crt2_numPontosTuristicos);
    //printf("Densidade Populacional: %s (%d)\n", crt1_DensiPopula < crt2_DensiPopula ? "Carta 2 venceu" : "Carta 1 venceu" , crt1_DensiPopula < crt2_DensiPopula);
    //printf("PIB per Capita: %s (%d)\n", crt1_pibPerCapita > crt2_pibPerCapita ? "Carta 1 venceu" : "Carta 2 venceu" , crt1_pibPerCapita > crt2_pibPerCapita);
    //printf("Super Poder: %s (%d)\n", crt1_superPoder > crt2_superPoder ? "Carta 1 venceu" : "Carta 2 venceu" , crt1_superPoder > crt2_superPoder);

    // Comparação dos atributos
    // Desafio: Tema 2 : nível novato
    printf("Resultados da Comparação:\n");

    // Comparação da População
    printf("População:\n");
    printf("Carta 1 - %s: %lu\n", crt1_nomeCidade, crt1_populacao);
    printf("Carta 2 - %s: %lu\n", crt2_nomeCidade, crt2_populacao);
    if (crt1_populacao > crt2_populacao) { // Se a população da carta 1 for maior
        printf("Resultado: Carta Código: %s (%s) venceu! Com %lu habitantes\n\n", crt1_codigo, crt1_nomeCidade, crt1_populacao);
    } else { // Caso contrário
        printf("Resultado: Carta Código: %s (%s) venceu! Com %lu habitantes\n\n", crt2_codigo, crt2_nomeCidade, crt2_populacao);
    }

    // Comparação da Área
    printf("Área:\n");
    printf("Carta 1 - %s: %.2f km²\n", crt1_nomeCidade, crt1_area);
    printf("Carta 2 - %s: %.2f km²\n", crt2_nomeCidade, crt2_area);
    if (crt1_area > crt2_area) { // Se a área da carta 1 for maior
        printf("Resultado: Carta Código: %s (%s) venceu! Com %.2f km² de area\n\n", crt1_codigo, crt1_nomeCidade, crt1_area);
    } else { // Caso contrário
        printf("Resultado: Carta Código: %s (%s) venceu! Com %.2f km² de area\n\n", crt2_codigo, crt2_nomeCidade, crt2_area);
    }

    // Comparação do PIB
    printf("PIB:\n");
    printf("Carta 1 - %s: %.2f\n", crt1_nomeCidade, crt1_pib);
    printf("Carta 2 - %s: %.2f\n", crt2_nomeCidade, crt2_pib);
    if (crt1_pib > crt2_pib) { // Se o PIB da carta 1 for maior
        printf("Resultado: Carta Código: %s (%s) venceu! Com %.2f km² de PIB\n\n", crt1_codigo, crt1_nomeCidade, crt1_pib);
    } else { // Caso contrário
        printf("Resultado: Carta Código: %s (%s) venceu! Com %.2f km² de PIB\n\n", crt2_codigo, crt2_nomeCidade, crt2_pib);
    }

    // Comparação do Número de Pontos Turísticos
    printf("Número de Pontos Turísticos:\n");
    printf("Carta 1 - %s: %d\n", crt1_nomeCidade, crt1_numPontosTuristicos);
    printf("Carta 2 - %s: %d\n", crt2_nomeCidade, crt2_numPontosTuristicos);
    if (crt1_numPontosTuristicos > crt2_numPontosTuristicos) { // Se o número de pontos turísticos da carta 1 for maior
        printf("Resultado: Carta Código: %s (%s) venceu! Com %d pontos turisticos\n\n", crt1_codigo, crt1_nomeCidade, crt1_numPontosTuristicos);
    } else { // Caso contrário
        printf("Resultado: Carta Código: %s (%s) venceu! Com %d pontos turisticos\n\n", crt2_codigo, crt2_nomeCidade, crt2_numPontosTuristicos);
    }

    // Comparação da Densidade Populacional
    printf("Densidade Populacional:\n");
    printf("Carta 1 - %s: %.2f hab/km²\n", crt1_nomeCidade, crt1_DensiPopula);
    printf("Carta 2 - %s: %.2f hab/km²\n", crt2_nomeCidade, crt2_DensiPopula);
    if (crt1_DensiPopula < crt2_DensiPopula) { // Se a densidade populacional da carta 1 for menor
        printf("Resultado: Carta Código: %s (%s) venceu! Com %.2f hab/km²\n\n", crt1_codigo, crt1_nomeCidade, crt1_DensiPopula);
    } else { // Caso contrário
        printf("Resultado: Carta Código: %s (%s) venceu! Com %.2f hab/km²\n\n", crt2_codigo, crt2_nomeCidade, crt2_DensiPopula);
    }

    // Comparação do PIB per Capita
    printf("PIB per Capita:\n");
    printf("Carta 1 - %s: %.2f\n", crt1_nomeCidade, crt1_pibPerCapita);
    printf("Carta 2 - %s: %.2f\n", crt2_nomeCidade, crt2_pibPerCapita);
    if (crt1_pibPerCapita > crt2_pibPerCapita) { // Se o PIB per capita da carta 1 for maior
        printf("Resultado: Carta Código: %s (%s) venceu! Com PIB per Capita de %.2f\n\n", crt1_codigo, crt1_nomeCidade, crt1_pibPerCapita);
    } else { // Caso contrário
        printf("Resultado: Carta Código: %s (%s) venceu! Com PIB per Capita de %.2f\n\n", crt2_codigo, crt2_nomeCidade, crt2_pibPerCapita);
    }

    return 0;
}