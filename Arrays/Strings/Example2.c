#include<stdio.h>
#include<string.h>
// Copy s1 to s2 without strcpy
int main(){
    char str1[100], str2[100]; // This is how we represent a string
    int i = 0, length = 0;
    printf("Enter a string: ");
    scanf("%s", str1);

    while(str1[i] != '\0'){
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0'; // Define end of string for str2
    printf("Copied string %s into %s\n", str1, str2);
    return 0;
}