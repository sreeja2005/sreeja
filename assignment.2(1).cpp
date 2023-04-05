#include <stdio.h>

int main() {
    int Arr[5] = {12, 56, 34, 78, 100};
    int i, max = Arr[0];
    for (i = 1; i < 5; i++) {
        if (Arr[i] > max) {
            max = Arr[i];
        }
    }
    printf("The largest element in the array is: %d\n", max);
    return 0;
}

