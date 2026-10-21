#include<stdio.h>
int fact_loop(int num);//function declaration
int main(){
    int num;
    int result;
    printf("Enter a positive integer: ");
    scanf("%d",&num);
    result=fact_loop(num);//function call
    printf("Factorial of %d is %d",num,result);
    return 0;
}
int fact_loop(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}