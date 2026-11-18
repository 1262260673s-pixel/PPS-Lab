#include <stdio.h>

int main(){
    int ch;
    float r, ar_circle, b, h, ar_triangle, l, w, ar_rectangle;
    const float PI = 3.14159;
    printf("\nEnter 1 for area of circle, 2 for area of triangle, 3 for area of rectangle: \n");
    scanf("%d", &ch);
    switch(ch){
        case 1:
            printf("\nEnter radius of circle: ");
            scanf("%f", &r);
            ar_circle = PI * r * r;
            printf("\nArea of circle is: %.2f\n", ar_circle);
            break;
        case 2:
            printf("\nEnter base and height of triangle: ");
            scanf("%f %f", &b, &h);
            ar_triangle = 0.5 * b * h;
            printf("\nArea of triangle is: %.2f\n", ar_triangle);
            break;
         case 3:
            printf("\nEnter length and width of rectangle: ");
            scanf("%f %f", &l, &w);
            ar_rectangle = l * w;
            printf("\nArea of rectangle is: %.2f\n", ar_rectangle);
            break;
        default:
            printf("\nInvalid choice!\n");
    }
}