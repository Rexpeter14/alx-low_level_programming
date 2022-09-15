#include <stdio.h>
/**
* fuction that print negative positive value when tested
*
* return 0
*
*/	
int main(void)
{
int A;

printf("Enter the number A: ");
scanf("%d", &A);

if (A > 0)
printf("%d is positive.", A);
else if (A < 0)
printf("%d is negative.", A);
else if (A == 0)
printf("%d is zero.", A);
return (0);
}
