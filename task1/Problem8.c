#include <stdio.h>

int main(){
    int n; //defining the variables
    int i =1;
    int sum = 0;

    printf("Enter an integer:"); //asking user to enter an integer
    scanf("%d", &n); //taking input from user

    
   while (i < n){ // checking for the conditions :)
    if (n % i == 0){
        sum += i;
    }
    i++;
   }
   
    if (sum == n){ //checking if divisors are equal to the number
    printf("%d is a perfect number\n", n);
    }
    else{
    printf("%d is not a perfect number\n", n);
    }
    return 0;
}
