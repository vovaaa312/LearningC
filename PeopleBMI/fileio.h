#ifndef FILEIO_H
#define FILEIO_H

#include "linkedlist.h"

void writeToFile(const char* filename, Node* head);
Node* readFromFile(const char* filename);

#endif
