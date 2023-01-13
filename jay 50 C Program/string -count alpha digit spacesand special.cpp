//wcp to using string count number of alphabets digit spacesand special 
		characters in a given string
		
		#include<stdio.h>
	#include<string.h>
	int main()
	{
		int c=0,i,a=0,b=0,d=0;
		char s[100];
		scanf("%[^.]s",s);
		for(int i=0;s[i]!='\0';i++)
		if((s[i]>='A'&& s[i]<='Z') || (s[i]>='a'&& s[i]<='z'))
		a++;
		else if(s[i]>='0' && (s[i]<='9')
		b++
		else if(s[i]==' ')
		c++
		else
		d++;
		printf("words=%d",c+1);
		return 0;
	}
		
	
	
