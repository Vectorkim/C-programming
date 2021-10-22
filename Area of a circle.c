/*Area of a circle*/
#include <stdio.h>

int main() {
int r;//r stands for radius
float pi, area;
pi=3.142;//initialize the value for pi
printf("Enter the radius\t");//prompt the user to input the Radius
scanf("%d", &r);//take the value for Radius
printf("\n Area of a circle=pi*r*r");//Display the formula for Area 
area=pi*r*r;//calculate the area
printf("\n Area is=%f\t", area);//display the value for area
return 0;
}
