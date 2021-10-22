#include <stdio.h>

int main()
{
    /*Arithmetic Operators*/
    printf("Arithmetic Operators");
    int a, b, Addition, Subtraction, Multiplication, Modulus;
    float Division;
    printf("\n Enter value for a \t");
    scanf("%d", &a);
    printf("\n Enter value for b \t");
    scanf("%d", &b);
    Addition=a+b;//It adds the two values
    Subtraction=a-b;//It finds the difference between the two values
    Multiplication=a*b;//It multiplies the two values
    Division=a/(float)b;/*Type Casting so that the value for
    Division will be in decimals. It does not change the
    pre-stated data type for value b*/
    Modulus=a%b;//It returns the remainder after dividing "a" with "b"
    printf("\n Addition=%d \t", Addition);//It displays the value for Addition
    printf("\n Subtraction=%d \t", Subtraction);//It displays the value for Subtraction
    printf("\n Multiplication=%d \t", Multiplication);//It displays the value for Multiplication
    printf("\n Division=%f \t", Division);//It displays the value for Division
    printf("\n Modulus=%d \t", Modulus);//It displays the value for Modulus

    /*Increment Operators*/
    printf("\n Increment Operators");
    //Print the values of a increment each time.
    //Used postfix mode for a and prefix mode for b.
    printf("\n %d \t", ++a);
    printf("\n %d \t", ++a);
    printf("\n %d \t", ++a);
    printf("\n %d \t", ++a);
    printf("\n %d \t", ++a);

    /*Decrement operators*/
    printf("\n Decrement operators");
    //Print the values of b decrement each time.
    printf("\n %d \t", --b);
    printf("\n %d \t", --b);
    printf("\n %d \t", --b);
    printf("\n %d \t", --b);
    printf("\n %d \t", --b);

    /*Relational operators*/
    printf("\n Relational operators");
    if (a==b){//Check whether a is equal to b
        printf("\n a is equal to b");
    }else if (a!=b){//Check whether a is not equal to b
    printf("\n a is not equal to b");
    }
    if (a>b){//Check whether a is greater than b
        printf("\n a is greater than b");
    }else if (a<b){//Check whether a is less than b
    printf("\n a is less than b");
    }
    if (a>=b){//Check whether a is greater than or equal to b
        printf("\n a is greater than or equal to b");
    }else if (a<=b){//Check whether a is less than or equal to b
    printf("\n a is less than or equal to b");
    }
    /*Logical operators*/
    printf("\n Logical Operators");
    int m, n;
    do{
        printf("\n Enter value of m Between 1-10 \t");
    scanf("%d", &m);
    printf("\n Enter value of n Between 1-10 \t");
    scanf("%d", &n);
    }
    while ((m>10)||(n>10));
    printf("\n Logical AND");
    if ((m>=5)&&(m<=10)){
        printf("\n m is a value between 5 and 10");
    }else{
        printf("\n m is less than 5");
    }
    printf("\n Logical OR");
    if ((n>=5)||(n<=10)){
        printf("\n n is simply equal to or less than 10");
    }
    return 0;
}
