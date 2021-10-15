/*This Program will calculate the Sum, Difference, Product, Division and Remainder of two numbers*/
#include <stdio.h>

int main()
{
    int a, b, Sum, Difference, Product;
	float Division, Remainder;
	printf("Enter the value of a\t");
    scanf("%d", &a);
    printf("\nEnter the value of b\t");
    scanf("%d", &b);
    Sum=a+b;
    Difference=a-b;
    Product=a*b;
    Division=a/b;
    Remainder=a%b;
    printf("\nThe Sum is=%d\n", Sum);
    printf("The Difference is=%d\n", Difference);
    printf("The Product is=%d\n", Product);
    printf("The Division is=%f\n", Division);
    printf("The Remainder is=%f\n", Remainder);
    return 0;
}
