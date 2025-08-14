#include <stdio.h>
#include <string.h>

/**
 * Struct que representa um território no jogo de guerra
 * Contém informações essenciais: nome, cor do exército e número de tropas
 */
typedef struct {
    char nome[30]; // Nome do território (máximo 30 caracteres)
    char cor[10];  // Cor do exército que controla o território
    int tropas;    // Quantidade de tropas no território
} Territorio;

/**
 * Função para cadastrar os dados de um território
 * Parâmetros: ponteiro para território e índice (para identificação)
 */
void cadastrarTerritorio(Territorio *t, int indice) {
    printf("\n--- CADASTRO DO TERRITÓRIO %d ---\n", indice + 1);

    printf("Digite o nome do território: ");
    fflush(stdin); // Limpa o buffer de entrada
    fgets(t->nome, sizeof(t->nome), stdin);
    t->nome[strcspn(t->nome, "\n")] = '\0'; // Remove a quebra de linha

    printf("Digite a cor do exército: ");
    fgets(t->cor, sizeof(t->cor), stdin);
    t->cor[strcspn(t->cor, "\n")] = '\0';

    printf("Digite o número de tropas: ");
    scanf("%d", &t->tropas);

    // Validação básica do número de tropas
    while (t->tropas < 0) {
        printf("Número inválido! Digite um número positivo de tropas: ");
        scanf("%d", &t->tropas);
    }
    getchar(); // Limpa o buffer após a leitura do inteiro
}

/**
 * Função para exibir os dados de todos os territórios cadastrados
 * Parâmetros: vetor de territórios e quantidade total
 */
void exibirTerritorios(Territorio territorios[], int quantidade) {
    printf("\n============================================================\n");
    printf("           TERRITÓRIOS CADASTRADOS NO JOGO WAR\n");
    printf("============================================================\n");

    for (int i = 0; i < quantidade; i++) {
        printf("\n--- TERRITÓRIO %d ---\n", i + 1);
        printf("Nome.............: %s\n", territorios[i].nome);
        printf("Cor do Exército..: %s\n", territorios[i].cor);
        printf("Tropas...........: %d\n", territorios[i].tropas);
        printf("------------------------------\n");
    }

    printf("\nTotal de territórios cadastrados: %d\n", quantidade);
}

/**
 * Função principal do programa
 * Gerencia o fluxo de cadastro e exibição dos territórios
 */
int main() {
    Territorio territorios[5];
    const int TOTAL_TERRITORIOS = 5;

    printf("==================================================\n");
    printf("    SISTEMA DE CADASTRO DE TERRITÓRIOS - WAR\n");
    printf("==================================================\n");
    printf("Cadastre %d territórios para iniciar o jogo!\n", TOTAL_TERRITORIOS);

    for (int i = 0; i < TOTAL_TERRITORIOS; i++) {
        cadastrarTerritorio(&territorios[i], i);
    }

    exibirTerritorios(territorios, TOTAL_TERRITORIOS);

    printf("\n🎮 Sistema pronto para iniciar o jogo WAR! 🎮\n");
    printf("Pressione Enter para finalizar...");
    getchar();

    return 0;
}