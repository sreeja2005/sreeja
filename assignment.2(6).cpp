#include <stdio.h>

int main() {
    int N, i, j = 0, k = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);
    int arr[N], even[N], odd[N];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            even[j++] = arr[i];
        } else {
            odd[k++] = arr[i];
        }
    }
    // print the even elements of the array
    printf("Even elements of the array: ");
    for (i = 0; i < j; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");
    // print the odd elements of the array
    printf("Odd elements of the array: ");
    for (i = 0; i < k; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");
    return 0;
}

