#include <stdio.h>

int main()
{
    /*Arithmetic Operators*/
    printf("Arithmetic Operators");
    int a, b, Addition, Subtraction, Multiplication, Modulus, Answer;
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
    int m, n, o, p, Result;
    printf("\n Enter value of m \t");
    scanf("%d", &m);
    printf("\n Enter value of n \t");
    scanf("%d", &n);
    printf("\n Enter value of o \t");
    scanf("%d", &o);
    printf("\n Enter value of p \t");
    scanf("%d", &p);
    //Logical AND
    printf("\n Logical AND");
    Result = (m == n) && (o > p);
    printf("\n (m == n) && (o > p) is %d", Result);
    //Logical OR
	printf("\n Logical OR");
    Result = (m == n) || (o > p);
    printf("\n (m == n) || (o > p) is %d", Result);
    //Logical NOT
	printf("\n Logical NOT");
    Result = !(m != p);
    printf("\n !(m != p) is %d", Result);
    Result = !(o == n);
    printf("\n !(o == n) is %d", Result);
    return 0;
}
