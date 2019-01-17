#include<stdio.h>
int main ()
{
	int n,s,e;
	scanf ("%d%d%d",&n,&s,&e);
	char way[n+1];
	getchar();
	fgets(way,n+1,stdin);
	if (way[s-1]==way[e-1])
	{
		printf ("%d",0);
	}
	else
	{
		printf ("%d",1);
	}
	 return 0;
} 
