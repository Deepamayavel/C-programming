#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[20];
    char words[20][10];
    int wordCount = 0;

    printf("Enter the string: ");
    fgets(s, sizeof(s), stdin);

    size_t len = strlen(s);
    if (len > 0 && s[len - 1] == '\n')
        s[len - 1] = '\0';

    int i = 0;
    while (s[i] != '\0') {

        while (s[i] == ' ')
            i++;

        if (s[i] == '\0')
            break;


        int j = 0;
        while (s[i] != '\0' && s[i] != ' ') {
            words[wordCount][j++] = s[i++];
        }
        words[wordCount][j] = '\0';
        wordCount++;
    }


    printf("Reversed string: ");
    for (int k = wordCount - 1; k >= 0; k--) {
        printf("%s", words[k]);
        if (k > 0)
            printf(" "); // single space between words
    }
    printf("\n");

    return 0;
}
