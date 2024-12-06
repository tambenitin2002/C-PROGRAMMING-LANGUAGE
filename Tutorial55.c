#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a =849826;
    int *ptr;//This is a wild pointer 
    //*ptr = 34;//This is not a goood thing to do 
    ptr = &a;//ptr is no longer a wild ponter
    printf("The value of a is %d\n",*ptr);
    
    return 0;
}