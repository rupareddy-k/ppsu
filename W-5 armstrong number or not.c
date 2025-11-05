#include <stdio.h>
#include <math.h>
int main()
{
    int n, temp, digit_cont, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
	temp = n;
    digit_cont=(int)log10(n) + 1;
    
    //raising individual digits to the digit_count power and adding
     while (temp)
    {
     int cur_digit=temp % 10;
     sum+=pow(cur_digit,digit_cont);
     temp=temp / 10;
    }
	if (sum == n)
        printf("%d is an Armstrong number\n", n);
    else
        printf("%d is not an Armstrong number\n", n);

    return 0;
}
