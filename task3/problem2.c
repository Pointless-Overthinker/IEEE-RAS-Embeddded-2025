//codeforces link:https://codeforces.com/group/MWSDmqGsZm/contest/219774/submission/316113708
#include <stdio.h>
#include <limits.h>

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;

    int min_val = INT_MAX;
    int min_pos = -1;
    for (int i = 1; i <= N; i++) {
        int x;
        scanf("%d", &x);
        if (x < min_val) {
            min_val = x;
            min_pos = i;
        }
    }

    printf("%d %d\n", min_val, min_pos);
    return 0;
}
