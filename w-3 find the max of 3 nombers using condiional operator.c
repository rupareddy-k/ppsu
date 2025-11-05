#include<stdio.h>
int main()
{
	//declare the variables
	int a,b,c,max;
	//get the three numbers from user
	printf("enter three number:");
	scanf("%d%d%d",&a,&b,&c);
	//checks if a>b,if yes,expl executes,if not,exp2 executes
	max=a>b?(a>c?a:c):(b>c?b:c);
	//print the result
	printf("largest among the three numbers is %d",max);
	return 0;
}