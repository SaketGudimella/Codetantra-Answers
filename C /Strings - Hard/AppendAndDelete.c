char appendAndDelete()
{
	char a[50],b[50];
	gets(a);
	gets(b);
	int p;
	scanf("%d",&p);
	int diff;
	diff=strlen(a)-strlen(b);
	if ((p==diff)||((strlen(a)+strlen(b))==p))
	{
		return 1;
	}
	else
	    return 0;
}
int main()
{
	if (appendAndDelete()==1)
	    printf("Yes");
	else 
	    printf("No");
}
