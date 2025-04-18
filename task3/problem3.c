//codeforces link:https://codeforces.com/group/MWSDmqGsZm/contest/219774/submission/316114138
#include <stdio.h>

int main(void) {
    int N;
    if (scanf("%d", &N) != 1) return 0;

    int a[1000];
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

   
    for (int i = 0; i < N-1; i++) {
        for (int j = 0; j < N-1-i; j++) {
            if (a[j] > a[j+1]) {
                int tmp = a[j];
                a[j] = a[j+1];
                a[j+1] = tmp;
            }
        }
    }

    
    for (int i = 0; i < N; i++) {
        printf("%d%c", a[i], i+1 < N ? ' ' : '\n');
    }

    return 0;
}
