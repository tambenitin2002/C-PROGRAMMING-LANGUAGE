//Continue Statement
#include <stdio.h>
int main()
{
    int age;
    for (int i = 0; i < 1; i++)
    {
    printf("%d Enter your age : \n",i);
    scanf("%d",&age);
    if (age>45)
    {
       continue;
    }
     printf("We have not come accross any continue statement\n");
      printf("We have  come accross any continue statement");
   }
return 0;    
}