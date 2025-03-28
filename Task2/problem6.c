//codeforces link:https://codeforces.com/group/MWSDmqGsZm/contest/223339/submission/312766758
#include<stdio.h>

int fib(int n){
    if (n==1){
        return 0;
    }
    else if(n ==2){
        return 1;
    }
    else{
        return fib(n-1) + fib(n-2);
    }

}

int main(void){
    int a;
    scanf("%d", &a);
    printf("%d\n", fib(a));
    return 0;
}