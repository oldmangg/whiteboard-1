#include <stdio.h>

void symmetric_difference(int arr1[], int n1, int arr2[], int n2) {
    printf("Symmetric Difference: ");
    for (int i = 0; i < n1; i++) {
        int found = 0;
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("%d, ", arr1[i]);
        }
    }
    for (int j = 0; j < n2; j++) {
        int found = 0;
        for (int i = 0; i < n1; i++) {
            if (arr2[j] == arr1[i]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("%d, ", arr2[j]);
        }
    }
    printf("\n");
}

int main() {
    int list1[] = { 4, 5, 2, 3, 1, 6 };
    int list2[] = { 8, 7, 6, 9, 4, 5 };
    symmetric_difference(list1, 6, list2, 6);
    return 0;
}
