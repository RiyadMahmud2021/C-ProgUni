#include <stdio.h>

double triangle_area(double a,double b)
{
    return .5*a*b;
}

int main()
{
    double t_area,ground,height;

    printf("enter triangle ground:");
    scanf("%lf",&ground);

    printf("enter triangle height:");
    scanf("%lf",&height);

    t_area = triangle_area(ground,height);
    printf("%lf",t_area);
}
