#include<stdio.h>
// Reverse str
int main(){
    char str[100]; // This is how we represent a string
    int i = 0, length = 0;
    printf("Enter a string:\n");
    scanf("%s", str); // Kushaal = 7 

    while(str[i] != '\0'){
        length++;
        i++;
    }
    printf("\nReverse\n");
    for(i = length-1; i >= 0; i--){
        printf("%c", str[i]);        
    }
    return 0;
}