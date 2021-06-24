#include <stdio.h>

int main()
{
    double area,s,a,b,c;
    printf("enter a,b,c");
    scanf("%lf %lf %lf",&a,&b,&c);

    s = (a + b + c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area = %lf",area);

    return 0;

}
