#include<stdio.h>

int rotate(long long int a[],int d,int n)
{
    int i,j,temp;
    for(i=1;i<=d;i++)
    {
        temp=a[0];
        for(j=1;j<n;j++)
        {
            a[j-1]=a[j];
        }
        a[n-1]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%lld ",a[i]);
    }
    return 0;
}

int main()
{
    int n,d,i;
    scanf("%d %d",&n,&d);
    long long int a[1000000];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    rotate(a,d,n);
}
