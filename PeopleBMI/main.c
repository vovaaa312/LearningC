#define _CRT_SECURE_NO_WARNINGS

#include "human.h"
#include "linkedlist.h"
#include "fileio.h"
#include <stdio.h>

int main() {
    Node* head = NULL;

    Human human1 = { "John", 180.0, 75.0, 0.0 };
    human1.bmi = calculateBMI(human1);

    Human human2 = { "Alice", 165.0, 60.0, 0.0 };
    human2.bmi = calculateBMI(human2);

    append(&head, human1);
    append(&head, human2);

    // ������ Human � ����
    writeToFile("humans.txt", head);

    // ������ �� ����� � �������� �������� ������
    Node* newList = readFromFile("humans.txt");

    // ����� ������ �� �����
    printList(newList);

    // ������������ ������, ���������� ��� ������
    freeList(newList);

    return 0;
}
