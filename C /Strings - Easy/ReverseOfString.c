#include"stdio.h"
void swap(char *x, char *y)
{
	char temp=*x;
	*x=*y;
	*y=temp;
}
void reverse(char *str, int k)
{
	static int i=0;
	if(*(str+k)=='\0')
	{
		return;
	}
	reverse(str,k+1);
	if(i<=k){
		swap(&str[i++],&str[k]);
	}
}
int main()
{
	char str[100];
gets(str);
  
     reverse(str, 0);
     printf("%s",str);
     return 0;
}
