#include<stdio.h>
int fact(int a, int b);
int main()
{
    int n;
    int b=1;
    scanf("%d",&n);
    fact(n,b);
    return 0;
}
int fact(int a, int b)
{
    if(b>a)
        return 0;
    else
    {
        printf("%d ",b);
        fact(a,b+1);
        b=b-1;
        if(b!=0)
        printf("%d ",b);
    }


}
