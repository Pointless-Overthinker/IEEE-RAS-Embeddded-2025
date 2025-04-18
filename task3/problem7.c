//codeforceslink:https://codeforces.com/group/MWSDmqGsZm/contest/219856/submission/316143890
#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);

   
    static char s[100005];
    scanf("%s", s);

    int ans = 0;
    char last = '\0';    

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != last) {
            ans++;
            last = s[i];
        }
    }

    printf("%d\n", ans);
    return 0;
}

