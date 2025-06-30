#include <stdio.h>

#define MAX 100

struct Animal {
    char nome[50];
    char tipo[30];
    int idade;
};

int main() {
    struct Animal lista[MAX];
    int total = 0;
    int opcao;

    do {
        printf("\n1 - Cadastrar animal\n");
        printf("2 - Listar animais\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);
        getchar(); 

        if (opcao == 1) {
            if (total < MAX) {
                printf("Nome: ");
                fgets(lista[total].nome, 50, stdin);

                printf("Tipo (ex: cachorro, gato): ");
                fgets(lista[total].tipo, 30, stdin);

                printf("Idade: ");
                scanf("%d", &lista[total].idade);
                getchar();

                total++;
                printf("Animal cadastrado!\n");
            } else {
                printf("Limite de animais atingido.\n");
            }
        } else if (opcao == 2) {
            if (total == 0) {
                printf("Nenhum animal cadastrado.\n");
            } else {
                printf("\n--- Lista de Animais ---\n");
                for (int i = 0; i < total; i++) {
                    printf("%d. %s - %s - %d anos", i + 1,
                           lista[i].nome,
                           lista[i].tipo,
                           lista[i].idade);
                }
            }
        }

    } while (opcao != 0);

    return 0;
}