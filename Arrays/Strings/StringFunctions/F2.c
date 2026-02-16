#include<stdio.h>
#include<string.h>
int main(){
    char s1[20] = "Kushaal";
    char s2[] = "Kushaal";
    int result = strcmp(s1, s2);
    if(result == 0){
        printf("Strings S1 %s S2 %s are equal.\n", s1, s2);
    }else{
        printf("Strings S1 %s S2 %s are not equal.\n", s1, s2);
    } 
    return 0;
}