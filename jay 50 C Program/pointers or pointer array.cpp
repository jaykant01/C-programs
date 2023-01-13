// wcp to print array of pointers or pointer array.

#include<stdio.h>
int main()
{
	int a=5,b=23,c=54;
	int *p[3];
	p[0]=&a;
	p[1]=&b;
	p[2]=&c;
	for(int i=0;i<3;i++)
	printf("%d\n",*p[i]);
	return 0;
}
