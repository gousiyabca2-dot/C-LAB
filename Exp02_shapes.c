#include<stdio.h>
int main(void)
{
    double length,breadth,radius,base,height;
    const double PI=3.14159;
    printf("Enter rectangle length and breadth:");
    scanf("%lf%lf",&length,&breadth);
    printf("Rectangle area=%.2lf\n",length*breadth);
    printf("Rectangle perimeter=%.2lf\n",2*(length+breadth));
    printf("Enter circle radius:");
    scanf("%lf",&radius);
    printf("circle area=%.2lf\n",PI*radius*radius);
    printf("circle circumference=%.2lf\n",2*PI*radius);
    printf("Enter triangle base and height:");
    scanf("%lf%lf",&base,&height);
    printf("triangle area=%.2lf\n",0.5*base*height);
    return 0; 
}