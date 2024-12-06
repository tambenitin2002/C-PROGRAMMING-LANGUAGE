#include<stdio.h>

int main()
{
    int matrice[3][3];
    printf("this program will print number from 1-9 in matrice form :\n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter no. (1-9):");
            scanf("%d",&matrice[i][j]);
        }
        {
            printf("\n\n\n");
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    printf("%d\t",matrice[i][j]);
                }
                printf("\n");
                
            }
            printf("\n\n\n so that`t the matrice form of no form 1-9 ");
            return 0;
            
        }
    }
    
}