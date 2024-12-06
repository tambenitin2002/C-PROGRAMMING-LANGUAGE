// 
// 
#include<stdio.h>
int calculation(int *value)
{
    *value=10;

}
int main()
{
    int a=20,b=30;
    printf("the value of a now is %d\n",a);
     printf("the value of a now is %d\n",b);
      printf("the sum of a and b is %d\n",a+=b);
       printf("the value of a now is %d",a-=b);
}

