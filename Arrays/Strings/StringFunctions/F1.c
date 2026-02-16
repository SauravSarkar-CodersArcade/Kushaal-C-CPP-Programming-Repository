#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "hello";
    int len = strlen(str);

    printf("Length: %d\n", len);

    char str2[20];
    strcpy(str2, str); 
    printf("Copied String Str2 %s\n", str2);

    // "kushaal" + "G P" = "Kushaal G P"; Concatenation
    char s1[20] = "Kushaal";
    char s2[] = " G P";
    strcat(s1, s2);
    printf("Strings S1 %s S2 %s\n", s1, s2);
    return 0;
}