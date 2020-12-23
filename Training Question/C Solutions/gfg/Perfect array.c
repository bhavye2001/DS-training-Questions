#include <stdio.h>

int perfect(int arr[], int n) 
{ 
    int i = 1; 
    while (arr[i] > arr[i - 1] && i < n)
    {
        ++i; 
    }
  
    while (arr[i] == arr[i - 1] && i < n)
    {
        ++i; 
    }
  
    while (arr[i] < arr[i - 1] && i < n)
    {
        ++i; 
    }
    return (i == n); 
}

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,i;
	    scanf("%d",&n);
	    int arr[100001];
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    if(perfect(arr,n))
	    {
	        printf("Yes\n");
	    }
	    else{
	        printf("No\n");
	    }
	}
	return 0;
}
