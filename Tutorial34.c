#include <stdio.h>
void printstr(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        printf("%c",str[i]);
        i++;
    }
}
int main()
{
    // char str[45]={'n','i','t','i','n','\0'};
    // char str[]="hurry";
    char str[45];
    gets(str);
    printf("usin custom functon printstr :\n");
    printstr(str);
    printf("using printf : %s\n",str);
    printf("using puts : \n");
    puts(str);
    return 0;
} 