// codeforces link:https://codeforces.com/group/MWSDmqGsZm/contest/219774/submission/316142787
#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    if (scanf("%d", &N) != 1) return 0;

    int primary = 0, secondary = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0, x; j < N; j++) {
            scanf("%d", &x);
            if (i == j) 
                primary += x;
            if (j == N - 1 - i) 
                secondary += x;
        }
    }

    printf("%d\n", abs(primary - secondary));
    return 0;
}
