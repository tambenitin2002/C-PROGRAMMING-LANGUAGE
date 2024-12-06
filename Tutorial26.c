#include<stdio.h>
int main()
{
    printf("lets learn about pointers\n");
    int a=76;
    int *ptra = &a;
    printf("the address of pointer to a is %p\n",&ptra);
    printf("the address of a is %p\n",&a);
    printf("the address of the value of a is%d\n",*ptra);
    printf("the value of a is %d\n",a);
    printf("the value of a is %x\n",ptra);
    return 0;
}