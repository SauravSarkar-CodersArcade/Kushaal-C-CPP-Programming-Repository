#include<stdio.h>
void identityMatrix(int); // Function Prototype
int main(){
    int n;
    scanf("%d", &n);
    // The actual values passed during function call are called arguments.
    identityMatrix(n); // Argument in function call
    return 0;
}
// Function Definition + Logic
// The variables defined in the function are called parameters
void identityMatrix(int n){ // Parameter
    // Function Body
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==j){
                printf(" 1 ");
            }else
            {
                printf(" 0 ");
            }
        }
        printf("\n");
    }
}