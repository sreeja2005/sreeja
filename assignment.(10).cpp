#include <stdio.h>

#define INT_MAX 2147483647

int min(int a, int b) {
    return (a < b) ? a : b;
}

int minJumps(int arr[], int n) {
    int jumps[n]; // to store the minimum number of jumps required to reach each index
    int i, j;

    if (n == 0 || arr[0] == 0) {
        return INT_MAX; // if the end is not reachable from the beginning
    }

    jumps[0] = 0;

    for (i = 1; i < n; i++) {
        jumps[i] = INT_MAX;
        for (j = 0; j < i; j++) {
            if (i <= j + arr[j] && jumps[j] != INT_MAX) {
                jumps[i] = min(jumps[i], jumps[j] + 1);
                break;
            }
        }
    }

    return jumps[n - 1];
}

int main() {
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int minJumpsRequired = minJumps(arr, n);

    if (minJumpsRequired == INT_MAX) {
        printf("The end is not reachable\n");
    } else {
        printf("Minimum number of jumps required to reach the end: %d\n", minJumpsRequired);
    }

    return 0;
}

