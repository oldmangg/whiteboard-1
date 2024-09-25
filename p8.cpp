#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define ALPHABET_SIZE 26

void clean_string(char* str, int count[]) {
    for (int i = 0; str[i]; i++) {
        if (isalpha(str[i])) {
            count[tolower(str[i]) - 'a']++;
        }
    }
}

int are_anagrams(char* str1, char* str2) {
    int count1[ALPHABET_SIZE] = { 0 };
    int count2[ALPHABET_SIZE] = { 0 };

    clean_string(str1, count1);
    clean_string(str2, count2);

    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (count1[i] != count2[i]) return 0;
    }
    return 1;
}

int main() {
    char str1[] = "listen";
    char str2[] = "silent";
    if (are_anagrams(str1, str2)) {
        printf("%s and %s are anagrams.\n", str1, str2);
    }
    else {
        printf("%s and %s are not anagrams.\n", str1, str2);
    }
    return 0;
}
