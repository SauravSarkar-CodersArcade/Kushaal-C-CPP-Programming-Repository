#include<stdio.h>
#include<string.h>
int main(){
    char s1[20] = "Kushaal";
    strupr(s1);
    char s2[] = "G P";
    strlwr(s2);
    printf("S1 %s\n", s1);
    printf("S2 %s\n", s2);
    return 0;
}