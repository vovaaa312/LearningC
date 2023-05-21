#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>

void append(Node** head, Human human) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = human;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    }
    else {
        Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("Name: %s\nHeight: %.2f\nMass: %.2f\nBMI: %.2f\n\n", current->data.name, current->data.height, current->data.mass, current->data.bmi);
        current = current->next;
    }
}

void freeList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        Node* temp = current;
        current = current->next;
        free(temp);
    }
}
