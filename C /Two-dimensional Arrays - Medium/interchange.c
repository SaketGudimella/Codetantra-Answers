#include <stdio.h>
int main()
{
	int a[10][10],m,n,i,j,x,r1,r2;
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d %d",&r1,&r2);
	for(j=0;j<n;j++)
	{
		x=a[r1-1][j];
		a[r1-1][j]=a[r2-1][j];
		a[r2-1][j]=x;
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
