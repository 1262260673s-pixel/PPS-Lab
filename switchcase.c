#include<stdio.h>
#include<stdlib.h>
int main() {
    int a,b,c,ch;
    printf("Enter first number: \n");
    scanf("%d",&a);
    printf("Enter second number: \n");
    scanf("%d",&b);
     while(1)
    {
        printf("Enter your choice: \n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                c=a+b;
                printf("Addition: %d\n",c);
                break;
            case 2:
                c=a-b;
                printf("Subtraction: %d\n",c);
                break;
            case 3:
                c=a*b;
                printf("Multiplication: %d\n",c);
                break;
            case 4:
                c=a/b;
                printf("Division: %d\n",c);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }

    
    return 0;
}
}