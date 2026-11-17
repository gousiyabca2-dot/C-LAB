#include <stdio.h>
int mai(void)
{
    int a,b;
    printf("Enter two integers:");
    scanf("%d %d",&a,&b);
    printf("Sum=%d\n",a+b);
    printf("Differnce=%d\n",a-b);
    printf("Product=%d\n",a*b);
    if(b!=0)
    {
      printf("Quotient=%d\n",a/b);
      printf("Remainder=%d\n",a%b);
    }
    else
    {
        printf("Division and remainder cannot be performed because the second integer is zero\n");
    }
    return 0;
}