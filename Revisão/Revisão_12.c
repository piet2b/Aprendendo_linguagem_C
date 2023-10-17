#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura do nó da fila
struct Node {
    int data;
    struct Node* next;
};

// Definição da estrutura da fila
struct Queue {
    struct Node* front;
    struct Node* rear;
};

// Função para inicializar uma fila vazia
void initializeQueue(struct Queue* queue) {
    queue->front = queue->rear = NULL;
}

// Função para verificar se a fila está vazia
int isEmpty(struct Queue* queue) {
    return queue->front == NULL;
}

// Função para enfileirar um elemento
void enqueue(struct Queue* queue, int value) {
    // Criar um novo nó
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    // Se a fila estiver vazia, o novo nó é tanto a frente quanto a retaguarda
    if (isEmpty(queue)) {
        queue->front = queue->rear = newNode;
    } else {
        // Caso contrário, adicionamos o novo nó à retaguarda e atualizamos a retaguarda
        queue->rear->next = newNode;
        queue->rear = newNode;
    }

    printf("Elemento %d enfileirado com sucesso.\n", value);
}

// Função para desenfileirar um elemento
void dequeue(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("A fila está vazia. Nenhum elemento para desenfileirar.\n");
    } else {
        // Removemos o nó da frente e liberamos a memória
        struct Node* temp = queue->front;
        queue->front = queue->front->next;
        free(temp);

        // Se a fila estiver vazia agora, também atualizamos a retaguarda para NULL
        if (queue->front == NULL) {
            queue->rear = NULL;
        }

        printf("Elemento desenfileirado com sucesso.\n");
    }
}

// Função para pesquisar se um elemento está presente na fila
int search(struct Queue* queue, int value) {
    struct Node* current = queue->front;

    while (current != NULL) {
        if (current->data == value) {
            return 1; // Elemento encontrado
        }
        current = current->next;
    }

    return 0; // Elemento não encontrado
}

// Função para mostrar o elemento em uma posição específica
void displayElementAtPosition(struct Queue* queue, int position) {
    struct Node* current = queue->front;

    int currentPosition = 0;

    while (current != NULL) {
        if (currentPosition == position) {
            printf("Elemento na posição %d: %d\n", position, current->data);
            return;
        }

        current = current->next;
        currentPosition++;
    }

    printf("Posição inválida. Não há elemento na posição %d.\n", position);
}

// Função para mostrar todos os elementos da fila
void displayAllElements(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("A fila está vazia. Nenhum elemento para exibir.\n");
    } else {
        struct Node* current = queue->front;

        printf("Elementos na fila:");

        while (current != NULL) {
            printf(" %d", current->data);
            current = current->next;
        }

        printf("\n");
    }
}

// Função principal
int main() {
    struct Queue queue;
    initializeQueue(&queue);

    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);
    displayAllElements(&queue);

    dequeue(&queue);
    displayAllElements(&queue);

    int searchValue = 20;
    if (search(&queue, searchValue)) {
        printf("Elemento %d encontrado na fila.\n", searchValue);
    } else {
        printf("Elemento %d não encontrado na fila.\n", searchValue);
    }

    displayElementAtPosition(&queue, 1);

    return 0;
}
