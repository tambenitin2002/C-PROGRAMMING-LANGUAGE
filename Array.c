#include <stdio.h>
int main()
{

    int marks[12], sum = 0;
    printf("enter marks of 12 students : \n\n");
    for (int i = 0; i < 12; i++)
    {
        printf("marks of %d student :", i + 1);
       scanf("%d", &marks[i]);
        sum += marks[i];
    }
    int average = sum/12;
    printf("\n the average marks of 12 students are %d", average);
    return 0;
}
