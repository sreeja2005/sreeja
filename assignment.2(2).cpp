#include <stdio.h>

int main() {
    int N, i, largest1 = -99999, largest2 = -99999; // initialize largest1 and largest2 to a small value
    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);
    int arr[N];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > largest1) { // if arr[i] is larger than the current largest1
            largest2 = largest1; // update the value of largest2 to the current value of largest1
            largest1 = arr[i]; // update the value of largest1 to arr[i]
        } else if (arr[i] > largest2 && arr[i] != largest1) { // if arr[i] is larger than the current largest2 and is not equal to largest1
            largest2 = arr[i]; // update the value of largest2 to arr[i]
        }
    }
    printf("The largest element in the array is: %d\n", largest1);
    printf("The second largest element in the array is: %d\n",largest2);
    return 0;
}

