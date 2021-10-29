/*This Program will demonstrate the use of Local, External, Static and Automatic Variables*/
#include <stdio.h>

int p=20;//This is the Global variable
extern int E=0;//This is the External variable

int Static_Variable()
{
	static int S=12;//This is the Static variable
	return S;//It returns the value for S making it available for the main function
}
int main()
{
  int a=5;//This is the Automatic variable
  int b=15;//This is both the Local variable
  printf("\n Global variable 'p'=%d", p);//Display the Global variable
  printf("\n External variable 'E'=%d", E);//Display the External variable
  printf("\n Static variable 'S'=%d", Static_Variable());//Display the Static variable
  printf("\n Automatic variable 'a'=%d", a);//Display the Automatic variable
  printf("\n Local variable 'b'=%d", b);//Display the Local variable
  /*All local variables are automatic variables*/
 return 0; 
}
