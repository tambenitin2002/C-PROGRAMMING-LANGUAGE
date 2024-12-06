#include <stdio.h>
#include "temp.c"
int myfunc(int a, int b)

{
    // auto int myvar;
   static int myvar;
    // myvar ++;
    // printf("The myVar is %d\n", myvar);

    myvar = a+b;
    return myvar;
}

int main()
{
    // int myvar;
    int a;
    int b;
    
    // Declaration - Telling the compiler about the variable (No space reserved)
    // Definition - Declaration + space reservation
    register int myvar = myfunc(3, 5);
    myvar = myfunc(3, 5);
    myvar = myfunc(3, 5);
    myvar = myfunc(3, 5);
    printf("The myVar is %d\n", myvar);

    return 0;
}
