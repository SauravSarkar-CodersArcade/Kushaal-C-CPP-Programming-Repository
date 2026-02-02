#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    printf("Enter any character (A-Z)or(a-z):\n");
    scanf("%c", &ch);
    if(!isalpha(ch)){
        printf("Invalid Character!");
        return 0;
    }
    switch (ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf("Vowel.");
        break;
        default:
        printf("Consonant.");
    }
    return 0;
}