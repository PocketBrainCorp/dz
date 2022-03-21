#include "utils.h"

size_t timer_from(int from) {
    size_t counter = 0;
    int i = from;
    if (i <= 0) {
        return 0;
    } else {
        do {
            ++counter;
            printf("%d ", i);
            i--;
        } while (i >= 1);
        ++counter;
        printf("%d\n", i);
    }
    return counter;
}

int custom_power(int base, int power) {
    int result = 1;
    int i;
    for (i = 1; i <= power; i++) {
        result = result*base;
    }
    return result;
}

