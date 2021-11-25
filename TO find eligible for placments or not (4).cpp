#include<stdio.h>
int main()
{
	float mat,eng,ps,sci,soc;
	float total,average,percentage;
	printf("Enter the marks of five subjects");
	scanf("%f,%f,%f,%f,%f",&mat,&eng,&ps,&sci,&soc);
	total=mat+eng+ps+sci+soc;
	average=total/5;
	percentage=(total/500)*100;
	printf("Average of 5 subjects is:%f\n",average);
	printf("total of 5 subjects is:%f\n",total);
	printf("percentage of 5 subjects is:%f\n",percentage);
	if(percentage>60)
	printf("You are elgible for placements");
	else
	printf("You are not eligible for placements");
	return 0;
}
