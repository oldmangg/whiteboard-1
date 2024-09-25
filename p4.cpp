#include <stdio.h>

void intersection(int arr1[], int n1, int arr2[], int n2) {
    printf("Intersection: ");
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d, ", arr1[i]);
                break;
            }
        }
    }
    printf("\n");
}

int main() {
    int list1[] = { 4, 5, 2, 3, 1, 6 };
    int list2[] = { 8, 7, 6, 9, 4, 5 };
    intersection(list1, 6, list2, 6);
    return 0;
}
