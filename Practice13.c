#include <stdio.h>
int main()
{
    int x,y,z,result,max;
    printf("\nInput the first integer : ");
    scanf("%d",&x);
    printf("\nInput the second integer:");
    scanf("%d",&y);
    printf("Input the third integer:");
    scanf("%d",&z);
    result=(x+y+abs(x-y))/2;
    max=(result+z+abs(result-z))/2;
    printf("\nmax value of three integers :%d",max);
    printf("\n");
    return 0;
}