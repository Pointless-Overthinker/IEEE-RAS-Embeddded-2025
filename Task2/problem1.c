#include <stdio.h>
int divide(int n1, int n2){
    if (n2==0){
        return 0;
    }
    return (n1 %n2 == 0);
}
int main(){
    int q , w; 
     scanf("%d %d", &q, &w);
     if (divide(q,w)){
        printf("%d is divisible by %d\n", q, w);
     }
     else {
        printf("%d is not divisible by %d\n", q, w);

     }
     return 0;
}