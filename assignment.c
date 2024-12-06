#include<stdio.h>

int main()
{
    char input;
    float kmsTomiles = 0.621371;
    float cmsTofoot = 0.0833333;
    float cmsToinches = 0.393701;
    float poundTokgs = 0.453592;
    float inchesTometer = 0.0254;
    float first,second;

    while (1)
    {
       printf("Enter the input character . q to quit\n");

       scanf("%c",&input);
       switch (input)
       {
       case 'q':
           printf("quitting the program....");
           goto end;
           break;
           case '1':
           printf("Enter quantity in term of first unit \n");
           scanf("%f",&first);
        
           second=first*kmsTomiles;
           printf("%f kms is equal to %f miles\n",first,second);
           break;
           case '2':
           printf("Enter quantity in term of first unit \n");
           scanf("%f",&first);
           second=first*cmsTofoot;
           printf("%f cms is equal to %f foot\n",first,second);
           break;
           case '3':
           printf("Enter quantity in term of first unit \n");
           scanf("%f",&first);
           second=first*cmsToinches;
           printf("%f cms is equal to %f inches\n",first,second);
           break;
           case '4':
           printf("Enter quantity in term of first unit \n");
           scanf("%f",&first);
           second=first*poundTokgs;
           printf("%f pound is equal to %f kgs\n",first,second);
           break;
           case '5':
           printf("Enter quantity in term of first unit \n");
           scanf("%f",&first);
           second=first*inchesTometer;
           printf("%f inches is equal to %f meter\n",first,second);
           break;
           default:           
           break;
           
       }
      
    }
    


end:
return 0;
     
}
