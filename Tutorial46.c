#include <stdio.h>

struct driver
{
    char name[34];
    char dlNo[45];
    char route[47];
    int kms;
};
int main()
{
    struct driver d1,d2,d3;
    printf("Enter the details of the driver no.1\n");
    
    
    
    printf("Enter the name of first driver\n");
    scanf("%s",&d1.name);

    printf("Enter the dlNos of first driver\n");
    scanf("%s",&d1.dlNo);

    printf("Enter the route of first driver\n");
    scanf("%s",&d1.route);

    printf("Enter the ro of first driver\n");
    scanf("%d",&d1.kms);

   
   printf("Enter the details of the driver no.2\n");


    
    printf("Enter the name of second driver\n");
    scanf("%s",&d2.name);

    printf("Enter the dlNo of second driver\n");
    scanf("%s",&d2.dlNo);

    printf("Enter the route of second driver\n");
    scanf("%s",&d2.route);

    printf("Enter the route of second driver\n");
    scanf("%d",&d2.kms);




    printf("Enter the details of the driver no.3\n");


     
    printf("Enter the name of third driver\n");
    scanf("%s",&d3.name);

    printf("Enter the dlNo of third driver\n");
    scanf("%s",&d3.dlNo);

    printf("Enter the route of third driver\n");
    scanf("%s",&d3.route);

    printf("Enter the route of third driver\n");
    scanf("%d",&d3.kms);

    printf("*******printing Information of these drivers :*******");
    printf("for Driver No 1:\n Name is %s/n",d1.name);
    printf("for Driver No 1:\n DL number is %s/n",d1.dlNo);
    printf("for Driver No 1:\n route is %s/n",d1.route);
    printf("for Driver No 1:\n kms is %d/n",d1.kms);


    printf("for Driver No 2:\n Name is %s/n",d2.name);
    printf(" DL number is %s/n",d2.dlNo);
    printf(" route is %s/n",d2.route);
    printf(" kms is %d/n",d2.kms);


    printf("for Driver No 3:\n Name is %s/n",d3.name);
    printf(" DL number is %s/n",d3.dlNo);
    printf(" route is %s/n",d3.route);
    printf(" kms is %d/n",d3.kms);




        
    return 0;
};