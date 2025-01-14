#include<stdio.h>
main()
{
	char ch,s[80],a;int i;
	printf("请输入一个字符ch:");
	scanf("%c",&ch);
	printf("请输入一个字符串：");
	while((a=getchar())!='\n')
	{s[i++]=a;}
	return 0;
}
