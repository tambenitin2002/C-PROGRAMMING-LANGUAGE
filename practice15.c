#include <stdio.h>
#include <math.h>
int main()
{
    float x1,y1,x2,y2,result;
    printf("Input the first point :");
    scanf("%f",&x1);
    printf("Input the second point:");
    scanf("%f",&y1);
          printf("Input the third point:");
    scanf("%f",&x2);
    printf("Input the forth point:");
    scanf("%f",&y2);
    result=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
    printf("Distance between the said point :%.4f",sqrt(result));
    printf("\n");
    return 0;
}