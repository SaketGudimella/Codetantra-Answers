#include <stdio.h>
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	char cosa[n][m];
	for(int i=0;i<n;i++){
		scanf("%s", cosa[i]);
	}
	int max=0;
	int cont=0;
	int res[n][n];
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int matches=0;
			for(int k=0;k<m;k++){
				if(cosa[i][k]!=cosa[j][k]||cosa[i][k]=='1')
				{
					matches++;
				}
			}
			res[i][j]=matches;
			if(max<matches)
			max=matches;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(res[i][j]==max){
				cont++;
			}
		}
	}
	printf("%d\n%d",max,cont);
}
