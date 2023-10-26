#include <stdio.h>
#include <string.h>

struct Livro {
    char isbn[14];
    char titulo[100];
    int quantidade;
};

// Função para trocar dois elementos do tipo struct Livro
void trocarLivros(struct Livro *a, struct Livro *b) {
    struct Livro temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// Função de ordenação Bubble Sort para ordenar os livros por ISBN
void bubbleSort(struct Livro livros[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(livros[j].isbn, livros[j + 1].isbn) > 0) {
                trocarLivros(&livros[j], &livros[j + 1]);
            }
        }
    }
}

int main() {
    int n;

    printf("Digite o número de livros na biblioteca: ");
    scanf("%d", &n);

    struct Livro livros[n];

    for (int i = 0; i < n; i++) {
        printf("\nLivro %d:\n", i + 1);

        printf("ISBN: ");
        scanf(" %[^\n]s", livros[i].isbn);

        printf("Título: ");
        scanf(" %[^\n]s", livros[i].titulo);

        printf("Quantidade: ");
        scanf("%d", &livros[i].quantidade);
    }

    bubbleSort(livros, n);

    printf("\nLivros ordenados pelo ISBN:\n");
    for (int i = 0; i < n; i++) {
        printf("ISBN: %s\n", livros[i].isbn);
        printf("Título: %s\n", livros[i].titulo);
        printf("Quantidade: %d\n", livros[i].quantidade);
        printf("\n");
    }

    return 0;
}
