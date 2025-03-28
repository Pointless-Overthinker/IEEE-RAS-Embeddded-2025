#include <stdio.h>
#include <math.h>

int armstrong(int n){
 int start = n;
  int sum = 0;
  int numbers = 0;
  int temporary =n;
  while(temporary!=0){
    temporary /= 10;
    numbers ++;
  }


temporary= n;
while (temporary !=0){
    int number = temporary %10;
    sum += (int)pow(number, numbers);
    temporary /=10;
}
return (sum == start);
}
int main(){
    int low, high;
    printf("please enter the low:");
    scanf("%d", &low);
    printf("please enter the high:");
    scanf ("%d", &high);
    printf("the numbers between %d and %d are:", low, high);
    
    for (int i=low; i<=high; i++){
        if(armstrong(i)){
            printf ("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

