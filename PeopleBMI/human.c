#include "human.h"

double calculateBMI(Human human) {
    return human.mass / ((human.height / 100) * (human.height / 100));
}
