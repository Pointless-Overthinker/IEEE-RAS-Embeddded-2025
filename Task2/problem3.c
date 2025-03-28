//codeforces loink:https://codeforces.com/group/MWSDmqGsZm/contest/223205/submission/312768772
#include <stdio.h>

int main(void) {
    unsigned int N;
    scanf("%u", &N);

    
    if (N == 0 || (N % 2 == 0)) {
        printf("NO\n");
        return 0;
    }

    
    
    char bin[400];  
    int length = 0;
    unsigned int temp = N;

    while (temp > 0) {
       
        bin[length++] = (temp & 1) + '0';
        temp >>= 1;
    }
    bin[length] = '\0';

    
    for (int i = 0; i < length / 2; i++) {
        if (bin[i] != bin[length - 1 - i]) {
            printf("NO\n");
            return 0;
        }
    }

    
    printf("YES\n");
    return 0;
}
