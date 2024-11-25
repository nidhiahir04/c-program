#include<stdio.h>

int main() {
    int n, i;
    int even_sum = 0, odd_sum = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        if (i % 2 == 0) {
            even_sum += arr[i];
        } else {
            odd_sum += arr[i];
        }
    }
    printf("Sum of elements at even positions: %d\n", even_sum);
    printf("Sum of elements at odd positions: %d\n", odd_sum);

    return 0;
}
