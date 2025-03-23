#include <stdio.h>
#include <math.h>
int checkforprime(int number)
{
    if (number < 2)
        return 0;
    for (int i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
            return 0;
    }
    return 1;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = 0;
    int current = 0;
    while (current != 0){
        sum += current % 10;
        current /= 10;
    }
    if (checkforprime(sum))
    printf("the sum of the digits (%d) is prime\n", sum);
    else 
    printf("the sum of the digits (%d) is not prime\n", sum);               
    return 0;
}