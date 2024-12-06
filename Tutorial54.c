#include <stdio.h>
#include <stdlib.h>
//int* functionDangling()
// {
//     int a,b,sum;
//     a=34;
//     b=454;
//     sum = a+b;
//     return &sum;
// }
int main()
{
//Case1:De allocation of a memory block
// int *ptr= (int *) malloc(7*sizeof(int));
// ptr[0] = 10;
// ptr[1] = 11;
// ptr[2] = 12;
// ptr[3] = 13;
// free(ptr);//ptr is now dangling pointer

//Case2 :function returning local variable address
//int * dangptr = functionDangling();
//dangptr is now dangling pointer
int * danglingptr3;
//Case3: If a variable goes out of scope 
{
    int a=12;
    danglingptr3=&a;

}
//Hare variable a goes out of scope which mean danglingptr3 is pointer to a location which is freed and hence
   
    return danglingptr3;
     

}