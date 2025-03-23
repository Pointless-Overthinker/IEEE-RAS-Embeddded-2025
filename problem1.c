#include<stdio.h>
#include<limits.h>
int main(){
    int number; 
    int largest = INT_MIN; 
    int smallest = INT_MAX; 
    printf("enter your numbers(-1 stops)"); 
    while(1){ 
        scanf("%d", &number); 
        if(number == -1){ 
            break; 
        }
        if(number > largest){ 
            largest = number; 
        }
        if(number < smallest){
            smallest = number;
        }
    }
    if(largest == INT_MIN && smallest ==INT_MAX){
        printf("not a valid entry.\n");
    }else{
        printf("largest number is: %d\n", largest);
        printf("smallest number is: %d\n", smallest);
    }
    return 0;
}