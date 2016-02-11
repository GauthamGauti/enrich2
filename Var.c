#include <stdio.h>
#include <stdlib.h>
int add(int , int , int );
int main()
{
    int a,b,c,tot=0;
    int s[3];
    printf("Enter the three numbers \n");
    scanf("%d %d %d",&a,&b,&c);
    printf("addition using 3 variables i %d",(a+b+c));
    s[0]=a;
    s[1]=b;
    s[2]=c;
    printf(" \n \n addition using array %d",(s[0]+s[1]+s[2]));
    tot=add(a,b,c);
    printf(" \n \naddition using func call  %d",tot);
    return 0;
}
int add(int x ,int y,int z)
{
    return(x+y+z);
}
