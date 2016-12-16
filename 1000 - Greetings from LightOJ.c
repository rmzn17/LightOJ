#include<stdio.h>

int main()
{
    int a,b,tc,cs=1;
    scanf("%d",&tc);
    while(tc--)
    {
        scanf("%d%d",&a,&b);
        printf("Case %d: %d\n",cs,a+b);
        cs++;
    }
    return 0;
}
