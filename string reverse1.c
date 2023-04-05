#include<stdio.h>
int main()
{
    char a[30],b[30];

    printf("Enter : ");
    gets(a);
    int len = strlen(a);
    for(int i=len-1;a[i]!='\0';i--)
    {
        printf("%c",i);
    }
}
