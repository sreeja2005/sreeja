#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int rev_arr[MAX_SIZE];
    int n, i, j, is_palindrome;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // reverse the array
    for (i = n - 1, j = 0; i >= 0; i--, j++) {
        rev_arr[j] = arr[i];
    }

    // check if the array is a palindrome
    is_palindrome = 1;
    for (i = 0; i < n; i++) {
        if (arr[i] != rev_arr[i]) {
            is_palindrome = 0;
            break;
        }
    }

    // print the reversed array
    printf("Reversed array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", rev_arr[i]);
    }
    printf("\n");

    // print if the array is a palindrome
    if (is_palindrome) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is not a palindrome.\n");
    }

    return 0;
}

