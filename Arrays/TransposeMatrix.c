#include<stdio.h>
int main(){
    int matrix[3][3], transpose[3][3];
    int i, j ;
    printf("Enter the 3x3 matrix elements: \n");            
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &matrix[i][j]);
        }
    }   
    // Logic to transpose the matrix
    // M[i][j] = T[j][i]
    printf("Enter the 3x3 matrix elements: \n");            
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            transpose[j][i] = matrix[i][j];
        }
    } 

    printf("The Original matrix elements: \n");            
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    } 
    printf("The Transpose matrix elements: \n");            
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    } 
    return 0;

}
