#include<stdio.h>
#include<string.h>
main(int argc,char * argv[])
{
	char *a=argv[1];
	char *b=argv[2];
	char *z=argv[3];
	int c,d;
	c=strlen(a);
	d=strlen(b);
	int e[26]={ 0 };
	int f=0;
	for(int i=0;i<d;i++) e[b[i]-'a'] = -1;
	for(int i=0;i<c;i++)
	{
		if(e[a[i]-'a']!=-1)
		{
			a[f]=a[i];
			f++;
		}
	}
	a[f]='\0';
	if(argv[3]) printf("Error\n");
	else printf("%s\n",a);

}
