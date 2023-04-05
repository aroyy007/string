#include<stdio.h>
int main()
{
    char a[30];
    int len=0;
    printf("Enter : ")
    gets(a);
    for(int i=0;a[i]!='\0'; i++)
    {
        len++;
    }
    printf("Length is %d",len);
    return 0;
}
