#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}

int main()
{
	int c,x,y;
	scanf("%d %d",&x,&y);
	c=add(x,y);
	printf("%d",c);
	return 0;
}
