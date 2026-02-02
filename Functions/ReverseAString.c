#include<stdio.h> // Brute Force
int main(){
    char str[100], rev[100];
    int i, j = 0;
    printf("Enter the string: ");
    // margorP
    // {'m','a','r','g','o','r','P','\0'};
    //   0   1   2   3   4   5   6
    scanf("%s", &str);
    // find the length
    for(i = 0; str[i] != '\0'; i++);
    // Copy on reverse
    // rev []
    // {'P','r','o','g','r','a','m','\0'};
    //   0   1   2   3   4   5   6
    for(i = i-1; i >= 0; i--){
        rev[j] = str[i];
        j++;
    }
    rev[j] = '\0'; 
    printf("Reversed String: %s", rev);

}