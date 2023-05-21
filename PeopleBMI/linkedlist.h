#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "human.h"

typedef struct Node {
    Human data;
    struct Node* next;
} Node;

void append(Node** head, Human human);
void printList(Node* head);
void freeList(Node* head);

#endif
