#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isIsomorphic(char *s, char *t) {
    int mapST[256];
    int mapTS[256];

    for (int i = 0; i < 256; i++) {
        mapST[i] = -1;
        mapTS[i] = -1;
    }

    int lenS = strlen(s);
    int lenT = strlen(t);

    if (lenS != lenT)
        return false;

    for (int i = 0; i < lenS; i++) {
        unsigned char c1 = s[i];
        unsigned char c2 = t[i];

        if (mapST[c1] == -1 && mapTS[c2] == -1) {
            mapST[c1] = c2;
            mapTS[c2] = c1;
        }

        else if (mapST[c1] != c2 || mapTS[c2] != c1) {
            return false;
        }
    }

    return true;
}

int main() {
    char s[50], t[50];

    printf("Enter first string (s): ");
    scanf("%s", s);
    printf("Enter second string (t): ");
    scanf("%s", t);

    if (isIsomorphic(s, t))
        printf("Output: true\n");
    else
        printf("Output: false\n");

    return 0;
}

