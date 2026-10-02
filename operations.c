#include<stdio.h>
int main() {
    printf("Hello, World!\n");
    int a,b,resulta,results,resultm,resultd;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    resulta=a+b;
    results=a-b;
    resultm=a*b;
    resultd=a/b;
    printf("Addition: %d\n", resulta);
    printf("Subtraction: %d\n", results);
    printf("Multiplication: %d\n", resultm);
    printf("Division: %d\n", resultd);
    return 0;
}