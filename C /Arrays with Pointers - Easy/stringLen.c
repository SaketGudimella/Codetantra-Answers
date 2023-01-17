#include <stdio.h> 
int main()
{
	char str[100];
	
	scanf("%s",str);

  int i;
  for(i=0;str[i]!=0;++i)
	i=i++;
	printf("%d",i);
}
	 
