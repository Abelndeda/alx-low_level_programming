#include <stdio.h>

void updateValueTo98(int *ptr) {
    if (ptr != NULL) {
        *ptr = 98;
    }
}

int main() {
    int n = 5;
    int *ptr = &n;

    printf("Before update: %d\n", *ptr);

    updateValueTo98(ptr);

    printf("After update: %d\n", *ptr);

    return 0;
}
