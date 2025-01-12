# byldyg
这是一个新手学习c语言的代码库存
输入三个整数，按从大到小的顺序输出。
#include<stdio.h>
main()
{
		int a,b,c;
	int t; 
	printf("请输入三个整数\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a<b)
	{
	t=a;
	a=b;
	b=t;	
	}
    if(a<c)
	{
    t=a;
    a=c;
	c=t;	
    }
    if(b<c)
	{
    t=b;
	b=c;
	c=t;	
    }
    printf("按从大到小的顺序输出；%d %d %d\n",a,b,c);
    return 0;
}
