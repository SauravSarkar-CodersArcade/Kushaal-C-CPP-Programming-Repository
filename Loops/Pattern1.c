#include<stdio.h>

int main(){
    // This is for a-z
    char ch = 'a';
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            printf("%c ", ch+j);
        }
        printf("\n");
    }

    // This is for 1-n
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}