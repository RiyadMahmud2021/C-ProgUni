#include <stdio.h>

int sum(int a,int b)
{
    int n=a+b;
    return n;
}
int sub(int c,int d)
{
    int m=c-d;
    return m;
}
int main()
{
    int e,f;
    e = sum(3,8);
    f = sub(8,3);
    printf("sub id %d\n",f);
    printf("sum is %d\n",e);
}
