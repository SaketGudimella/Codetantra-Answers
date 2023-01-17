#include <stdio.h>
int main()
{
	int a [10][10],m,n,i,j,rows,columns,b[10][10], count=1;
	scanf("%d\n%d",&i,&j);
	for(rows=0;rows<i;rows++)
	{
		for(columns=0;columns<j;columns++)
		{
			scanf("%d",&a[rows][columns]);
		}
	}
	for(rows=0;rows<i;rows++)
	{
		for(columns=0;columns<j;columns++)
		{
			b[columns][rows]=a[rows][columns];
		}
	}
	for(rows = 0; rows<i;rows++)
	{
		for(columns=0;columns<j;columns++)
		{
			if(a[rows][columns]!=b[rows][columns])
			{
				count++;
				break;
			}
		}
	}
	if(count==1)
	{
		printf("Symmetric\n");
	}
	else
	{
		printf("Not Symmetric\n");
	}
}
