#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct Node
{
    int Data;
    struct Node *link; 
};

void Push(struct Node **Head, int Data){
    struct Node *NewNode = (struct Node*)malloc(sizeof(struct Node));
    NewNode->Data = Data;
    NewNode->link = *Head;
    *Head = NewNode;
}

void Show(struct Node *Head){
    struct Node *Current = Head;
    while (Current != NULL){
        printf("%d -> ", Current->Data);
        Current = Current->link;
    }
    printf("NULL\n");
}

int Pop(struct Node **Head){
    if (*Head == NULL) {
        printf("Stack is empty.\n");
        return -1; // Indicate stack underflow
    }
    struct Node *Temp = *Head;
    int PoppedData = Temp->Data;
    *Head = Temp->link;
    free(Temp);
    return PoppedData;
}

int main() {
    struct Node *Stack = NULL;

    Push(&Stack, 10);
    Push(&Stack, 20);
    Push(&Stack, 30);

    Show(Stack);

    printf("Popped: %d\n", Pop(&Stack));
    Show(Stack);

    printf("Popped: %d\n", Pop(&Stack));
    Show(Stack);

    printf("Popped: %d\n", Pop(&Stack));
    Show(Stack);

    return 0;
}