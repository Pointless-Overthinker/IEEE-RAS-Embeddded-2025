//codeforces link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/submission/312768015
#include <stdio.h>
void printing(int n){
    if (n==0){
        return;
    }
    printing(n-1);
    printf("%d\n", n);
}
int main(void){
    int N;
    scanf("%d", &N);
    printing(N);
    return 0;
}