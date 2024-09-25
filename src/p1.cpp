#include <stdio.h>

int main() {
    int arr[] = { 21, 400, 8, -3, 77, 99, -16, 55, 111, -36, 28 };
    int length = 11;
    int i;

    void bbsort(int arr, int length);

    for (i = 0; i < length; i++) {
        if (i != 0) {
            printf(", ");
        }
        printf("%d", arr[i]);
    }
}

void bbsort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
