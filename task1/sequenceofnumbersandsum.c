//codeforces link:https://codeforces.com/group/MWSDmqGsZm/contest/219432/submission/312118152
#include <stdio.h>

int main() {
    int N, M;
    
    while (1) {
        if (scanf("%d %d", &N, &M) != 2) {

            break;
        }
        if (N <= 0 || M <= 0) {
            break;
        }
        int start = (N < M) ? N : M;
        int end   = (N > M) ? N : M;
        int sum = 0;
        for (int i = start; i <= end; i++) {
            printf("%d ", i);
            sum += i;
        }
        printf("sum =%d\n", sum);
    }
    
    return 0;
}
