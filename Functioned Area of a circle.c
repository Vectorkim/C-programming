#include <stdio.h>
float r_squared(float r);
float Pi(void);
float r;
int main(void)
{
	float Area;
	printf("Enter the value for radius\t");
	scanf("%f", &r);
	Area=Pi()*r_squared(r);
	printf("\n Area of a circle =Pi*r*r");
	printf("\n The Area of your circle is %f", Area);
    return 0;
}
 float r_squared(float r)
{
	float r_squared;
	r_squared=r*r;
	return r_squared;
}
float Pi(void)
{
	float Pi;
	Pi=3.142;
	return Pi;
}
