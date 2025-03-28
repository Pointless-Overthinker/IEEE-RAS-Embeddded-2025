//codeforces link:https://codeforces.com/group/MWSDmqGsZm/contest/223339/submission/312766171
#include<stdio.h>
int length (long long x){
    if (x ==1){
        return 1;
    }
    else if( x%2 ==0){
        return 1+ length(x/2);
    }
    else{
        return 1+ length(3*x+1);
    }

}
int main(void){
    long long n;
    scanf("%lld", &n);
    printf("%d\n", length(n));
    return 0;
}