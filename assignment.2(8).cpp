#include <stdio.h>

#define SIZE 7

int main()
{
    int a[SIZE] = { 2, 3, 2, 1, 4, 3, 2 };
    int freq[SIZE];
    int i, j, count;

    // initialize frequency array with all elements set to 0
    for (i = 0; i < SIZE; i++) {
        freq[i] = 0;
    }

    // count frequency of each element
    for (i = 0; i < SIZE; i++) {
        count = 1;
        for (j = i + 1; j < SIZE; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }
        freq[i] = count;
    }

    // print the frequency of each element
    printf("Frequency of each element:\n");
    for (i = 0; i < SIZE; i++) {
        printf("%d occurs %d times\n", a[i], freq[i]);
    }

    return 0;
}

