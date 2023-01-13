//wcp to check given string is panagram or not
// the quick brown fox jumps over the lazy dog.

#include<stdio.h>
int main()
{
	int f2=0;
	char str[100];
	gets(str);
	for(int i=65;i<=90;i++)
{
	int f=0;
	for(int j=0;str[j];j++)
	if(str[j]==i || str[j]==i+32)
	{
		 f=1;
		break;
	}
	if(f==0)
{
	printf("not pangaram");
	f2=1;
	break;
}
}
if(f2==0)
printf("pangram");
return 0;
}
