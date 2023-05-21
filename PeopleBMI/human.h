#ifndef HUMAN_H
#define HUMAN_H

typedef struct {
    char name[20];
    double height;
    double mass;
    double bmi;
} Human;

double calculateBMI(Human human);

#endif