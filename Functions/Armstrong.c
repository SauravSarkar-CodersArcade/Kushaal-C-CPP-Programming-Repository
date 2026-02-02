#include<stdio.h>
#include<math.h>
int countDigits(int n){
    if( n == 0){
        return 1;
    }
    int count = 0;
    while (n > 0)
    {
        count++;
        n = n / 10;
    }
    return count;
    
}
int isArmstrong(int n){
    int digits = countDigits(n);
    int original = n;
    int ans = 0;
    while(n > 0){
        int d = n % 10;
        ans = ans + pow(d, digits);
        n = n / 10;
    }
    if(ans == original){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);
    printf("No of digits in %d is %d\n", n, countDigits(n));
    if(isArmstrong(n)){
        printf("%d is an Armstrong Number\n", n);
    }else{
        printf("%d is not an Armstrong Number\n", n);
    }
}