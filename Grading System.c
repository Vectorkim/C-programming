#include <stdio.h>

int main() {
    int Math, Eng, Kisw, Sci, Social, Average;
	printf("Enter max for:Math, Eng, Kisw, Sci, Social\t\n");
	scanf("%d %d %d %d %d", &Math, &Eng, &Kisw, &Sci, &Social);
	Average=(Math+Eng+Kisw+Sci+Social)/5;
	printf("\nAverage=%d", Average);
	if (Average>=90&&Average<=100)
	{
		printf("\nYou have an 'A'");
	}
	else if (Average>=80&&Average<90)
	{
		printf("\nYou have a 'B'");
	}
	else if (Average>=70&&Average<80)
	{
		printf("\nYou have a 'C'");
	}
	else if (Average>=60&&Average<70)
	{
		printf("\nYou have a 'D'");
	}
	else if (Average>=50&&Average<60)
	{
		printf("\nYou have an 'E'");
	}
	else
	{
		printf("\nYou have 'Failed'");
	}
    return 0;
}
  
