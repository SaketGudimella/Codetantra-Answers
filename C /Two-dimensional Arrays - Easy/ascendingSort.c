#include <stdio.h>
int main()
{
	int i,j,n,m,k,max;
	scanf("%d %d",&n,&m);
	int a[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			for(k=j+1;k<m;k++)
			{
				if(a[i][j]>a[i][k])
				{
					max=a[i][j];
					a[i][j]=a[i][k];
					a[i][k]=max;
					
				}
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
	return 0;
}
