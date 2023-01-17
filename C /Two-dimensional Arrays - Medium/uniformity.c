#include <stdio.h>
int main()
{
	int arr[20][20];
	int i,j,n=0,c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
			if(arr[i][j]%2==0)
			{
				c++;
			}
		}
	}
	if(c==n*n||c==0)
	{
		printf("Uniformity matrix");
	}
	else
	{
		printf("Not a uniformity matrix");
	}
	return 0;
}
