#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct Node
{
    int Data;
    struct Node *link; 
};


void InsertNewNode(struct Node **Head, int Data){
    struct Node *NewNode = (struct Node*)malloc(sizeof(struct Node));
    NewNode->Data = Data;
    NewNode->link = *Head;
    *Head = NewNode;
}

void ShowLinkedList(struct Node *Head){
    struct Node *Current = Head;
    while (Current != NULL){
        printf("%d -> ", Current->Data);
        Current = Current->link;
    }
    printf("NULL\n");
}

int RemoveNode(struct Node **Head, int Data){
    struct Node *Current = *Head;
    struct Node *Previous = NULL;
    while (Current != NULL){
        if (Current->Data == Data){
            if (Previous == NULL){
                *Head = Current->link;
            }
            else{
                Previous->link = Current->link;
            }
            free(Current);
            return 1;
        }
        Previous = Current;
        Current = Current->link;
    }
    return 0;
}

int main(){
    struct Node *Head = NULL;
    InsertNewNode(&Head, 10);
    InsertNewNode(&Head, 20);
    InsertNewNode(&Head, 30);
    InsertNewNode(&Head, 40);
    InsertNewNode(&Head, 50);
    ShowLinkedList(Head);
    RemoveNode(&Head, 30);
    ShowLinkedList(Head);
    RemoveNode(&Head, 10);
    ShowLinkedList(Head);
    RemoveNode(&Head, 50);
    ShowLinkedList(Head);
    RemoveNode(&Head, 40);
    ShowLinkedList(Head);
    RemoveNode(&Head, 20);
    ShowLinkedList(Head);
    InsertNewNode(&Head, 777);
    InsertNewNode(&Head, 888);
    InsertNewNode(&Head, 999);
    ShowLinkedList(Head);
    RemoveNode(&Head, 888);
    ShowLinkedList(Head);

    free(Head);
    return 0;
    
}
