#include <stdio.h>

int square_root(int x) {
    int result = 0;
    for (int i = 0; i * i <= x; i++) {
        result = i;
    }
    return result;
}

int main() {
    int x = 4; 
    printf("Square root of %d is %d\n", x, square_root(x));
    return 0;
}
