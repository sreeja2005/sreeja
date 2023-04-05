#include <stdio.h>

int main() {
    int N, i, j, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);
    int arr[N], new_arr[N];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    // remove duplicate elements from the array
    int count;
    for (i = 0; i < N; i++) {
        count = 0;
        for (j = 0; j < i; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }
        if (count == 0) {
            new_arr[k++] = arr[i];
        }
    }
    // print the new array with duplicate elements removed
    printf("Resultant Array after removing duplicates: ");
    for (i = 0; i < k; i++) {
        printf("%d ", new_arr[i]);
    }
    printf("\n");
    return 0;
}

