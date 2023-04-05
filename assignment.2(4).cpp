#include <stdio.h>

int main() {
    int N, i, max_diff = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);
    int arr[N];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    // find the maximum difference between two elements in the array
    int min_element = arr[0];
    for (i = 1; i < N; i++) {
        if (arr[i] - min_element > max_diff) {
            max_diff = arr[i] - min_element;
        }
        if (arr[i] < min_element) {
            min_element = arr[i];
        }
    }
    printf("Maximum difference is %d\n", max_diff);
    return 0;
}

