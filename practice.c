// \\write a c program that accepts two integers from the user and calculate the product of the two integers.
// Test data:
// Input the first integer :25
// input the second integer:15
// Expected output :
// // Product of the above two integers=375
#include <stdio.h>
int main()
{int x,y,result;
printf("\nInput the first integer :");
scanf("%d",&x);
printf("\nInput the second integer:");
scanf("%d",&y);
result=x*y;
printf("Product of the above two integer =%d\n",result);
return 0;

}