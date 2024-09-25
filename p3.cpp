#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void print_fibonacci(int n) {
    for (int i = 0; i < n; i++) {
        printf("%d, ", fibonacci(i));
    }
    printf("\n");
}

int main() {
    int n = 10; 
    print_fibonacci(n);
    return 0;
}
