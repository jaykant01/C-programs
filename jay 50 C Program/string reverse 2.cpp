//string reverse without using inbuilt function
	
	#include<stdio.h>
	#include<string.h>
	int main()
	{
		int l,i;
		char s1[100],s2[100];
		scanf("%[^\n]s",s1);
		l=strlen(s1);
		for(i=0;i<l;i++);
		s2[i]=s1[l-1-i];
		
		s2[i]='\0';
		if(strcmp(s1,s2)==0)
		printf("palindrome");
		else
		printf("not");
		return 0;
	}
