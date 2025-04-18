//codeforces link:https://codeforces.com/group/MWSDmqGsZm/contest/219774/submission/316142942
#include <stdio.h>

int main() {
    int N, M;
    if (scanf("%d %d", &N, &M) != 2) 
        return 0;

    int row[100];
    for (int i = 0; i < N; i++) {
        
        for (int j = 0; j < M; j++) {
            scanf("%d", &row[j]);
        }
        
        for (int j = M - 1; j >= 0; j--) {
            printf("%d", row[j]);
            if (j > 0) 
                putchar(' ');
        }
        putchar('\n');
    }

    return 0;
}
