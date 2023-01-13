//wcp to print the multipication table with loop

#include<stdio.h>
int main()
{
	int num;
	printf("Enter the table which you want to print");
	scanf("%d\n",&num);
	for(int i=1;i<11;i++)
	printf("%d X %d = %d\n",num,i,num*i);
	return 0;
}
