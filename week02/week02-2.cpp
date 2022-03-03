#include <stdio.h>

char T1[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
char T2[]="A   3  HIL JM O   2TUVWXY51SE Z  8 ";

char mirror(char c)
{
    for(int i=0;T1[i]!=0;i++)
    {
        if(c==T1[i]) return T2[i];
    }
    return ' ';
}

int main()
{
    char c;
    scanf("%c",&c);

    printf("它的鏡像字是--%c--",mirror(c));
}

