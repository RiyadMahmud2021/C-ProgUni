#include <stdio.h>

int square(int a)
{
    return a * a;
}
int main()
{
    int sqr,num;
    printf("enter num:");
    scanf("%d",&num); //%d er agaa & pora fakaaaa rakhaa zabaaa na

    sqr = square(num);
    printf("sqr is %d",sqr);

}
