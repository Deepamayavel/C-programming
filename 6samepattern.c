#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define PATTERN 100
#define STRING 100

void splitwords(char *s, char **w, int *wc) {
    *wc = 0;
    char *token = strtok(s, " ");
    while (token != NULL) {
        w[*wc] = token;
        (*wc)++;
        token = strtok(NULL, " ");
    }
}

bool wp(char *p, char *s) {
    int p_len = strlen(p);
    char *w[PATTERN];
    int wc = 0;
    splitwords(s, w, &wc);

    if (p_len != wc)
        return false;

    char ptow[256][STRING] = {{0}};
    char used_words[wc][STRING];
    int used_count = 0;

    for (int i = 0; i < p_len; i++) {
        char cur_char = p[i];
        char *cur_word = w[i];

        if (ptow[(unsigned char)cur_char][0] == 0) {
            for (int j = 0; j < used_count; j++) {
                if (strcmp(used_words[j], cur_word) == 0)
                    return false;
            }
            strcpy(ptow[(unsigned char)cur_char], cur_word);
            strcpy(used_words[used_count++], cur_word);
        } else {
            if (strcmp(ptow[(unsigned char)cur_char], cur_word) != 0)
                return false;
        }
    }
    return true;
}

int main() {
    char p1[PATTERN];
    char s1[STRING * 4];

    printf("Enter the pattern: ");
    scanf("%s", p1);
    getchar();

    printf("Enter the string: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = '\0';

    if (wp(p1, s1)) {
        printf("Output: true\n");
    } else {
        printf("Output: false\n");
    }

    return 0;
}
