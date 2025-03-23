#include <stdio.h>
#include <string.h>

int main(){
    char wfc[100]; // Declare a character array to store the word named wfc (short for word for check)
    printf("Enter a word:");
    scanf("%s", wfc);
    int len = strlen(wfc);
    int palindrome = 1;
    for(int i = 0; i < len / 2; i++){
        if(wfc[i] != wfc[len - i - 1]){
            palindrome = 0;
            break;
        }
    }
    if(palindrome){
        printf("%s is a palindrome\n" , wfc);
    }else{
        printf("%s is not a palindrome\n" , wfc);
    }
    return 0;
}
