#include <stdio.h>

int GCD(int a, int b){
    if (b==0){
        return a;
    }
    return GCD(b, a%b) ;
}
int main(){
    int n1,n2;
    printf("please enter the two integers:");
    scanf("%d %d", &n1, &n2);
    printf("GCD of %d,%d is %d\n", n1, n2, GCD(n1, n2));
    return 0;
}