#include <stdio.h>

int sum(int a,int b)
{
    int n=a+b;    //modified
    return n;
}
int main()
{
    int c;
    c = sum(3,8);
    printf("sum is %d",c);
}
