#include<stdio.h>
int main()
{
	int bs(int a[],int l, int r, int x);
	int n,x,l,r;
	printf("Enter size of array :");
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	printf("\n Enter the element needed to searched in sorted order... =");
	scanf("%d",&x);
	l=0,r=n-1;
int index=bs(a,l,r,x);
if(bs>=0)
printf("\n Element found at index %d",index);
else
printf("\n Element doesnot exist ");
}
int bs(int a[],int l, int r, int x)
{
	int mid;
	if(r>=l)
	{
		mid=(l+r)/2;
		if(a[mid]==x)
		return(mid);
		if(x<a[mid])
		return bs(a,l,mid-1,x);
		else
		return bs(a,mid+1,r,x);
		
	}
	return(-1);
}
