#include<stdio.h>
int main()
{
	int c;
	float f;
	printf("Enter the temperature in celcius");
	scanf("%d",&c);
	f=32+(9*c)/5;
	printf("The value of temperature in fahrenheat is:%f",f);
	return 0;
}
