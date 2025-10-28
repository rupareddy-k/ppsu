#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,si,ci;
	printf("enter principal amount (p):");
	scanf("%f",&p);
	printf("enter timr in year(t):");
	scanf("%f",&t);
	printf("enter rate in percent(r);");
	scanf("%f",&r);
	/*calculating simple interest*/
	si=(p*t*r)/100.0;
	/*calculating compound intersert*/
	ci=p*(pow(t+r/100,t)-1);
	printf("simple interest=%0.3f\n",si);
	printf("compound interest=%0.3",ci);
	return 0;
}