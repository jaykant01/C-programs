//wcp to count the number of words in a given string with multi line
	
	#include<stdio.h>
	#include<string.h>
	int main()
	{
		int c=0,i;
		char s[100];
		scanf("%[^.]s",s);
		for(int i=0;s[i]!='\0';i++)
		if(s[i]==' '||s[i]=='\n')
		c++;
		printf("words=%d",c+1);
		return 0;
	}
	
		
		
	
	
	
	
	
	
	
	
