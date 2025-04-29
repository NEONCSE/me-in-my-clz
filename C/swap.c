// to swap the two numbers in single line
#include<stdio.h>

int main() {

    int a, b;

    printf("Enter any two numbers to swap them:");
    scanf("%d",&a);
    scanf("%d",&b);

    printf("Before Swap:\n");
    printf("a=%d  b=%d",a,b);

    a=a^b^(b=a);

    printf("\nAfter Swap:\n");
    printf("a=%d  b=%d",a,b);

    return 0;
}