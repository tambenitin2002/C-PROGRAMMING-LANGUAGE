#include<stdio.h>
int main()
{
    // 
    int arr[]={1,2,3,4,5,6,7,99};
    printf("value at position 0 of the array is %d\n",arr[0]);
    printf("value at position 1 of the array is %d\n",arr[1]);
    printf("value at position 2 of the array is %d\n",arr[2]);
    printf("the address of first element of the array is %d\n",arr);
    printf("the address of first element of the array is %d\n",arr);
    printf("the address of first element of the array is %d\n",&arr[1]);
    printf("the address of third element of the array is %d\n",&arr[2]);
    printf("the address of third element of the array is %d\n\n",arr+2);
    printf("the value at address of third element of the array is %d\n",*(&arr[2]));
    return 0;









}


