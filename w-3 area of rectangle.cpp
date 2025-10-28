#include<stdio.h>
int main()
{
	//declare variable;
	float  len,wid,area;
	//take input;
	printf("enter length & width of rectange:");
	scanf("%f%f",&len,&wid);
	//calculat area 
	area=len*wid;
	//display result
	printf("area of rectangle=%3f cm\n",area);
	return 0;
}