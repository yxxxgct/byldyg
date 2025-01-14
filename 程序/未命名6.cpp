#include<stdio.h>
main()
{
	int n,i,f=1;
	printf("请输入一个整数：\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	f*=i;
	printf("%d!=%d",n,f);
}
