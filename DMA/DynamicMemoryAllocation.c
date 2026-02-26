#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    int * ptr;
    // Use of malloc
    // ptr = (int*) malloc(n * sizeof(int)); // This is an array of size n
    // Use of calloc
    ptr = (int*)calloc(n, sizeof(int));
    printf("Enter the %d array elements:\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &ptr[i]);
    }
    printf("The %d array elements are:\n", n);
    for(int i=0; i<n; i++){
        printf("%d ", ptr[i]);
    }
    printf("\n");
    printf("Enter the new size of the array:\n");
    scanf("%d", &n);

    ptr = realloc(ptr, n * sizeof(int));
    printf("Enter the %d new array elements:\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &ptr[i]);
    }
    printf("The %d new array elements are:\n", n);
    for(int i=0; i<n; i++){
        printf("%d ", ptr[i]);
    }
    printf("\n");
    free(ptr);
    return 0;
}