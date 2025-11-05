#include <stdio.h>
#include <math.h>

int main()
{
    int originalNumber, reverseNumber = 0, tempNumber;

    printf("Enter a number: ");
    scanf("%d", &originalNumber);

    // Storing original number in tempNumber
    tempNumber = originalNumber;

    // Finding out the reverse of the given number
    while (tempNumber != 0)
    {
        int cur_digit = tempNumber % 10;
        reverseNumber = reverseNumber * 10 + cur_digit;
        tempNumber = tempNumber / 10;
    }

    // Comparing
    if (originalNumber == reverseNumber)
        printf("Palindrome");
    else
        printf("Not a Palindrome");

    return 0;
}
