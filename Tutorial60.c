#include <stdio.h>
#include <conio.h>
//#include <stdlib.h>
// int main()
// {
//     printf("file name is %s\n ",__FILE__);
//     printf("Line No is %d\n",__LINE__);
//     printf("todays date is %d\n",__DATE__);
//     printf("time:%d\n",__TIME__);

//     return 0;
// }

int num1,num2,Ans;
int main()
{
 printf("Enter the two numbers:");
 scanf("%d%d",&num1,&num2);
 Ans=num1*num2;
 printf("\nThe Ans of %d and %d=%d",num1,num2,Ans);
// getchar();
 return 0;

}


