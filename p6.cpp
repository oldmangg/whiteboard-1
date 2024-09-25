#include <stdio.h>

void max_occurrence(char* str) {
    int count[256] = { 0 }; 
    char max_char;
    int max_count = 0;

    for (int i = 0; str[i]; i++) {
        if (str[i] != ' ') {
            count[(unsigned char)str[i]]++;
            if (count[(unsigned char)str[i]] > max_count) {
                max_count = count[(unsigned char)str[i]];
                max_char = str[i];
            }
        }
    }

    printf("Character: '%c', Occurrence: %d\n", max_char, max_count);
}

int main() {
    char input[] = "Hello, world!";
    max_occurrence(input);
    return 0;
}
