//codeforces link: https://codeforces.com/group/MWSDmqGsZm/contest/219856/submission/316143521
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    static char s[1000005];
    if (!fgets(s, sizeof(s), stdin)) return 0;

    int words = 0;
    int in_word = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if ( (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') ) {
            if (!in_word) {
                in_word = 1;
                words++;
            }
        } else {
            in_word = 0;
        }
    }

    printf("%d\n", words);
    return 0;
}
