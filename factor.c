#include<stdio.h>
void main()
{
    int a,b,i;
    scanf("%d",&a);
    for(i=2;i<=a;i++)
    {
        b=a%i;
        if(b==0)
        printf("%d\n",i);
        
    }
}
