#include <stdio.h>
#include <string.h>

int main() {
    char s[50];
    int len, count = 0;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    len = strlen(s);
    int i = len - 1;

    while (i >= 0 && s[i] == ' ') {
        i--;
    }


    while (i >= 0 && s[i] != ' ') {
        count++;
        i--;
    }

    printf("Length of last word: %d\n", count);
    return 0;
}

