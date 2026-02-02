#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        // Spaces 
        for(int space=1; space <= n-i; space++){
            printf("  ");
        }
        // Stars
        for(int star=1; star <= 2*i-1; star++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}