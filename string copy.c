#include<stdio.h>
int main()
{
    char a[30],b[30];
    int len=0;
    printf("Enter : ");
    gets(a);
    for(int i=0;a[i]!='\0'; i++)
    {
        b[i]=a[i];
    }
    printf("copy is : %s",b);
    return 0;
}
