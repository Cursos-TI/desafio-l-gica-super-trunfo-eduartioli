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
    int escolha1, escolha2;

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
    printf("### Escolha o Primeiro atributo para a comparação: ###\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB per Capita\n");
    scanf("%d", &escolha1);

    printf("\n");

    // Variáveis para armazenar valores e resultados das comparações
    float crt1esc1, crt1esc2, crt2esc1, crt2esc2;
    int vencedor1, vencedor2;

       switch(escolha1) {
        case 1: // População
            crt1esc1 = crt1_populacao;
            crt2esc1 = crt2_populacao;
            vencedor1 = (crt1esc1 > crt2esc1) ? 1 : (crt1esc1 < crt2esc1) ? 2 : 0;
            break;
        case 2: // Área
            crt1esc1 = crt1_area;
            crt2esc1 = crt2_area;
            vencedor1 = (crt1esc1 > crt2esc1) ? 1 : (crt1esc1 < crt2esc1) ? 2 : 0;
            break;
        case 3: // PIB
            crt1esc1 = crt1_pib;
            crt2esc1 = crt2_pib;
            vencedor1 = (crt1esc1 > crt2esc1) ? 1 : (crt1esc1 < crt2esc1) ? 2 : 0;
            break;
        case 4: // Pontos Turísticos
            crt1esc1 = crt1_numPontosTuristicos;
            crt2esc1 = crt2_numPontosTuristicos;
            vencedor1 = (crt1esc1 > crt2esc1) ? 1 : (crt1esc1 < crt2esc1) ? 2 : 0;
            break;
        case 5: // Densidade Demográfica
            crt1esc1 = crt1_DensiPopula;
            crt2esc1 = crt2_DensiPopula;
            vencedor1 = (crt1esc1 < crt2esc1) ? 1 : (crt1esc1 > crt2esc1) ? 2 : 0;
            break;
        case 6: // PIB per Capita
            crt1esc1 = crt1_pibPerCapita;
            crt2esc1 = crt2_pibPerCapita;
            vencedor1 = (crt1esc1 > crt2esc1) ? 1 : (crt1esc1 < crt2esc1) ? 2 : 0;
            break;
    }
    // Menu Interativo para poder fazer a escolha
    printf("### Escolha o Segundo atributo para a comparação: ###\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB per Capita\n");
    scanf("%d", &escolha2);

    // Verificação de atributos únicos
    if (escolha1 == escolha2) {
        printf("Erro: Você deve escolher atributos diferentes!\n");
        return 1; // Encerra o programa com um código de erro
    }

    // Lógica de comparação para o segundo atributo
    switch(escolha2) {
        case 1: // População
            crt1esc2 = crt1_populacao;
            crt2esc2 = crt2_populacao;
            vencedor2 = (crt1esc2 > crt2esc2) ? 1 : (crt1esc2 < crt2esc2) ? 2 : 0;
            break;
        case 2: // Área
            crt1esc2 = crt1_area;
            crt2esc2 = crt2_area;
            vencedor2 = (crt1esc2 > crt2esc2) ? 1 : (crt1esc2 < crt2esc2) ? 2 : 0;
            break;
        case 3: // PIB
            crt1esc2 = crt1_pib;
            crt2esc2 = crt2_pib;
            vencedor2 = (crt1esc2 > crt2esc2) ? 1 : (crt1esc2 < crt2esc2) ? 2 : 0;
            break;
        case 4: // Pontos Turísticos
            crt1esc2 = crt1_numPontosTuristicos;
            crt2esc2 = crt2_numPontosTuristicos;
            vencedor2 = (crt1esc2 > crt2esc2) ? 1 : (crt1esc2 < crt2esc2) ? 2 : 0;
            break;
        case 5: // Densidade Demográfica
            crt1esc2 = crt1_DensiPopula;
            crt2esc2 = crt2_DensiPopula;
            vencedor2 = (crt1esc2 < crt2esc2) ? 1 : (crt1esc2 > crt2esc2) ? 2 : 0;
            break;
        case 6: // PIB per Capita
            crt1esc2 = crt1_pibPerCapita;
            crt2esc2 = crt2_pibPerCapita;
            vencedor2 = (crt1esc2 > crt2esc2) ? 1 : (crt1esc2 < crt2esc2) ? 2 : 0;
            break;
    }

    float soma_crt1, soma_crt2;

    // Cálculo da soma dos atributos
    soma_crt1 = crt1esc1 + crt1esc2;
    soma_crt2 = crt2esc1 + crt2esc2;


    // Exibição detalhada do resultado
    printf("\n--- Resultado da Comparação ---\n");
    printf("Cidade 1: %s\n", crt1_nomeCidade);
    printf("Cidade 2: %s\n\n", crt2_nomeCidade);

    printf("Atributos comparados:\n");
    printf("1º Atributo: %s\n", &escolha1);
        if (vencedor1 == 1) {
        printf("Vencedor do 1º atributo: %s\n\n", crt1_nomeCidade);
        } else if (vencedor1 == 2) {
        printf("Vencedor do 1º atributo: %s\n\n", crt2_nomeCidade);
        } else {
        printf("Vencedor do 1º atributo: Empate\n\n");
        }

    printf("2º Atributo: %s\n", &escolha2);
        if (vencedor2 == 1) {
        printf("Vencedor do 2º atributo: %s\n\n", crt1_nomeCidade);
        } else if (vencedor2 == 2) {
        printf("Vencedor do 2º atributo: %s\n\n", crt2_nomeCidade);
        } else {
        printf("Vencedor do 2º atributo: Empate\n\n");
        }
    
    printf("Soma dos atributos:\n");
    printf("Carta 1 (%s): %.2f\n", crt1_nomeCidade, soma_crt1);
    printf("Carta 2 (%s): %.2f\n\n", crt2_nomeCidade, soma_crt2);

    // Determinação do vencedor final
    if (soma_crt1 > soma_crt2) {
        printf("### Parabens. Vencedor final: %s! ###\n", crt1_nomeCidade);
    } else if (soma_crt1 < soma_crt2) {
        printf("### Parabens. Vencedor final: %s! ###\n", crt2_nomeCidade);
    } else {
        printf("Essa não!! Deu Empate!\n");
    }

    return 0;
}