//codeforces link:https://codeforces.com/group/MWSDmqGsZm/contest/219774/submission/316113407
#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    if (scanf("%d", &N) != 1)
     return 0;

    long long *A = malloc((size_t)N * sizeof(long long));
    if (!A) return 0;

    for (int i = 0; i < N; i++) {
        scanf("%lld", &A[i]);
    }

    long long X;
    scanf("%lld", &X);

    int pos = -1;
    for (int i = 0; i < N; i++) {
        if (A[i] == X) {
            pos = i;
            break;
        }
    }

    printf("%d\n", pos);
    free(A);
    return 0;
}
