#include <stdio.h>
void main()
{
    int n, i,k,a[20], sum = 0;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter k");
    scanf("%d",&k);
printf("enter array elements");
for(i=0;i<=n;i++)
{
scanf("%d",&a[i]);
}

    for(i=1;i<=k;i++)
{
sum=sum+a[i];
}
printf("%d",sum);
}