#include <stdio.h>

int main() {
    int N, i, j, temp;
    float avg;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);
    int arr[N];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    // sort the array in descending order
    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // find the second largest and smallest elements in the array
    int second_largest = arr[1];
    int second_smallest = arr[N - 2];
    // compute the average of the second largest and smallest elements
    avg = (float)(second_largest + second_smallest) / 2;
    // check if the average is present in the array
    for (i = 0; i < N; i++) {
        if (arr[i] == avg) {
            printf("The average of the second largest and smallest elements (%.2f) is present in the array.\n", avg);
            return 0;
        }
    }
    printf("The average of the second largest and smallest elements (%.2f) is not present in the array.\n", avg);
    return 0;
}

