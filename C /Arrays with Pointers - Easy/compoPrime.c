#include <stdlib.h>
#include <stdio.h>
int main()
{
	int n, prime,com,k;
	scanf("%d", &n);
	int *p;
	p=(int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
	scanf("%d",(p+i));
	for(int i=0;i<n;i++)
	{
		k=0;
		if(*(p+i)==1)
		{
			prime++;
			continue;
		}
		for(int j=1; j<=*(p+i);j++)
		{
			if(*(p+i)%j==0)
			k++;
		}
		if(k==2)
		prime++;
		else 
		com++;
	}
	printf("%d\n%d\n",prime,com);
}
