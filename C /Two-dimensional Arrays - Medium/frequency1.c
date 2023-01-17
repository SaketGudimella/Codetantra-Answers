#include <stdio.h>
int main()
{
	 int a[10][10],m,n,i,j;
	 int freq=0;
	 scanf("%d%d",&m,&n);
	 for(i=0;i<m;++i)
	 {
	 	for(j=0;j<n;++j)
	 	{
	 		scanf("%d",&a[i][j]);
	 	}
	 }
	 for(i=0;i<m;++i)
	 {
	 	for(j=0;j<n;++j)
	 	{
	 		if(a[i][j] % 2 == 0)
	 		freq++;
	 	}
	 }
	 printf("%d", freq);
	 return 0;
}
