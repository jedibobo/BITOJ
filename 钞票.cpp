#include <stdio.h>

#include <stdlib.h>

int compare(const void *i, const void *j);
int main ()
{
	int n,j=0;
	long temp;
	long long total=0;
	scanf ("%d",&n);
	if (n==0)
	{
		printf ("%d",-1);
		return 0;
	}
	long long ori[n];
	long long odd[n];
	for (int i=0;i<n;i++)
	{
		scanf ("%lld",&ori[i]);
		if (ori[i]%2!=0&&ori[i]>=1)
		{
			odd[j]=ori[i];
			j++;
		}
		else
		{
			total+=ori[i];
		}
	}
	qsort(odd, j, sizeof(long long), compare);
	/*for (int m=1;m<j;m++)
	{
		for (int s=0;s<n-m-1;s++)
		{
			if (odd[s]>odd[s+1])
			{
				temp=odd[s+1];
				odd[s+1]=odd[s];
				odd[s]=temp;
			}
		}
	}*/
	for (int i=0;i<j;i++)
	{
		printf("%lld\n",odd[i]);
	}
	if (j==0)
	{	
		printf ("%d",-1);
		return 0;
	}
	
	else if((j+1)%2==0)
	{
		for (int i=0;i<j;i++)
		{
			total+=odd[i];
		}
	}
	else
	{
		for (int i=1;i<j;i++)
		{
			total+=odd[i];
		}
	}
	printf ("%lld",total);
	return 0;
}
int compare(const void *i, const void *j)

{

    return *(const long long *)i > *(const long long *)j ? 1 : -1;

}
