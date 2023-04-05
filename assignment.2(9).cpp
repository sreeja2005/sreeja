#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i, j, temp, size;

    printf("Enter the value of N: ");
    scanf("%d", &size);

    printf("Enter the numbers: \n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // sort the array in descending order
    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                // swap arr[i] and arr[j]
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // print the sorted array in descending order
    printf("The numbers arranged in descending order are given below:\n");
    for (i = 0; i < size; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}

