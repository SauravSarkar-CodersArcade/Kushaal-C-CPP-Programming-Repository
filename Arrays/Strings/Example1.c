#include<stdio.h>
// FInd length without strlen
int main(){
    char str[100]; // This is how we represent a string
    int i = 0, length = 0;
    printf("Enter a string: ");
    scanf("%s", str);

    while(str[i] != '\0'){
        length++;
        i++;
    }
    printf("Length = %d\n", length);
    return 0;
}