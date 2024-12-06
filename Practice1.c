#include <stdio.h>
int main()
{
    int a,b,sum;
    printf("1st no:");
    scanf("%d",&a);
    printf("2nd no:");
    scanf("%d",&b);
    sum=a+b;
    printf("the sum of a and b is:%d",sum);
    
    if (sum < 10)
    {
        printf("\nyour sum is less than 10=%d",sum);
    }
    {
        printf("\nthe program is so good");
    }
    return 0;
}
