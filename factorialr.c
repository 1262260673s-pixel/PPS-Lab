#include<stdio.h>
int fact_rec(int num);//function declaration
int main(){
    int num;
    int result;
    printf("Enter a positive integer: ");
    scanf("%d",&num);
    result=fact_rec(num);//function call
    printf("Factorial of %d is %d",num,result);
    return 0;
}
int fact_rec(int num)//function definition
{
    if(num==1)
        return 1;
    else
        return num*fact_rec(num-1);
}