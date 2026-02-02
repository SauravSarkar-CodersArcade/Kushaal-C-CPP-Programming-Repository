#include<stdio.h>
void zigZag(int);
void zigZagFast(int);
int main(){
    zigZag(9);
    zigZag(13);
    zigZagFast(17);
    return 0;
}
void zigZag(int cols){
    for(int r=1; r<=3; r++){
        for(int c=1; c<=cols; c++){
            if((r+c)%4 == 0 || (r==2 && c%4==0)){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
void zigZagFast(int cols){
    for(int r=1; r<=3; r++){
        for(int c=1; c<=cols; c++){
            if(r==1 && c%4==3 || r==2 && c%2==0 ||
            r==3 && c%4==1){
                printf("* ");
            }else{
                printf("  ");
            }
        }printf("\n");
    }
}
