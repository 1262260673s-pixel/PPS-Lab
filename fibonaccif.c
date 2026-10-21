#include<stdio.h>
void fibonacci(int n){//function declaration
    int a=0,b=1,c,i;
    printf("Fibonacci Series: ");
    for(i=1;i<=n;i++){
        printf("%d ",a);
        c=a+b;
        a=b;
        b=c;
    }     
}
int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    fibonacci(n);//function call
    return 0;
}