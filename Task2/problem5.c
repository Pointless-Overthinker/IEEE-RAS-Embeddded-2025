//codeforces link:https://codeforces.com/group/MWSDmqGsZm/contest/223339/submission/312767700
#include <stdio.h>
void printing(unsigned long long n){
    if (n<10){
        printf("%llu", n);
    }
    else {
        printing(n/10);
        printf(" %llu", n%10);
    }

}

int main (void){
    int N;
    scanf("%d", &N);
    while (N--){
        unsigned long long Q;
        scanf("%llu", &Q);
        printing(Q);
        printf("\n");
    }
    return 0;
}