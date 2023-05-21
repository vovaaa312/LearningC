#include "fileio.h"
#include <stdio.h>

void writeToFile(const char* filename, Node* head) {
    FILE* file;
    if (fopen_s(&file, filename, "w") != 0) {
        printf("Error opening file.\n");
        return;
    }

    Node* current = head;
    while (current != NULL) {
        fprintf(file, "%s %.2f %.2f %.2f\n", current->data.name, current->data.height, current->data.mass, current->data.bmi);
        current = current->next;
    }

    fclose(file);
}

Node* readFromFile(const char* filename) {
    FILE* file;
    if (fopen_s(&file, filename, "r") != 0) {
        printf("Error opening file.\n");
        return NULL;
    }

    Node* head = NULL;
    char name[20];
    double height, mass, bmi;

    while (fscanf_s(file, "%s %lf %lf %lf", name, sizeof(name), &height, &mass, &bmi) == 4) {
        Human human;
        strcpy_s(human.name, sizeof(human.name), name);
        human.height = height;
        human.mass = mass;
        human.bmi = bmi;
        append(&head, human);
    }

    fclose(file);
    return head;
}