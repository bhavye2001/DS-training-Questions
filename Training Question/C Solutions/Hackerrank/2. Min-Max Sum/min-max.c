#include<stdio.h>

void bubble(long long int a[], int n)
{
    int i,j,c ,t;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n-i-1;j++)
        {
            if (a[j]>a[j+1])
            {
              c = a[j];
              a[j]=a[j+1];
              a[j+1]=c;
              t =1;
            }
        }
    if (t==0)
     {
        break;
     }
    }
}

int main()
{
    int n=5;
    long long int a[n];
    int i;
    long long int sum1=0,sum2=0;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    bubble(a,n);
    for(i=0;i<n-1;i++)
    {
        sum1=sum1+a[i];
    }
    for(i=1;i<n;i++)
    {
        sum2=sum2+a[i];
    }
    printf("%lld %lld",sum1,sum2);
    
    
}
