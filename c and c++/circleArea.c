#include <stdio.h>

int main()
{
    double radius,area,pi=3.1416;

    printf("enter radius=");
    scanf("%lf",&radius);

    area=pi*radius*radius;
    printf("area is %.2lf",area);
    return 0;
}
