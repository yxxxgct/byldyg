#include<stdio.h>
main()
{
	int n,i,f=1;
	printf("������һ��������\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	f*=i;
	printf("%d!=%d",n,f);
}
