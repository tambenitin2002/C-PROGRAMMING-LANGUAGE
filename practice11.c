// what a C programing that accepts two item weight (float point values )and number of purchase (floating point values)and calculate the average value of the items.
// Test Data : 
// Weight-Items1:15
// No .of Item1:5
// Weight -Item2:25
// No.of Item2 :4
// Expected utput :
// Average Value=19.44444
#include <stdio.h>
int main()
{
double w1,c1,w2,c2,result;
printf("weight1 :");
scanf("%lf",&w1);
printf("Item1   :");
scanf("%lf",&c1);
printf("weight2  :");
scanf("%lf",&w2);
printf("Item2   :");
scanf("%lf",&c2);
result=((w1*c1)+(w2*c2))/(c1+c2);
printf("Average Value = %f\n",result);
return 0;


}