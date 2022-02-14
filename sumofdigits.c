#include <stdio.h>
int SumOfDigits(int x){
    if(x==0){
        return 0;
    }
    else{
    return (x % 10 + SumOfDigits(x / 10));
    }   
  }                                         
int main(){
        int a;
        printf("Enter a Number to Find the sum of it's digits: " );
        scanf("%d",&a);
        printf("Sum of Digits of %d is: %d",a,SumOfDigits(a));

return 0;
}
