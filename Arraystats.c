#include <stdio.h>
int main()
{
    int a [50],n,i;
    int sum=0,iargest,smallest;
    int even=0,odd=0;
    float mean;
    printf("Enter number of elements:");
    scanf("%d",&n);
    if(n<1 || n>50)
    {
        printf("Enter a value from 1 to 50.\n");
return 0;
    }
    printf("Enter %d integers:",n);
    for(i=0;i<n;i++)
       scanf("%d",&a[i]);
      iargest = a[0];
     smallest = a[0];
for(i=0;i<n;i++)
{
    sum=sum+a[i];
    if(a[i]> iargest)
    iargest = a[i];
    if(a[i]<smallest)
    smallest=a[i];
    if(a[i]%2==0)
    even++;
    else
       odd++;
}
  mean=(float)sum/n;
  printf("sum=%d\n",sum);
  printf("Mea%f\n",mean);
  printf("iargest=%d\n",iargest);
  printf("smallest=%d\n",smallest);
  printf("Even elements=%d\n",smallest);
  printf("odd elements=%d\n",odd);
  return 0;
}
