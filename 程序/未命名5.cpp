#include<stdio.h>
void fun(int x,int y);
int main()
{
	int x=5,y=3;
	fun(x,y);
	printf("%d,%d\n",x,y);
	return 0;
}
void fun(int x,int y)
{
	x=x+y;
	y=x-y;
	x=x-y;
	printf("%d,%d\n",x,y);
}
