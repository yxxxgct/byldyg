#include<stdio.h>
main()
{
    int a,i,m;
    printf("请输入一个整数：\n");
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {m=a%i;
    if(m==0) 
	{printf("%d不是素数\n",a) ;
	return 1;
	 }
	 else
	 i++;
	}
    printf("%d是素数\n",a);
    return 0;
 } 
 
