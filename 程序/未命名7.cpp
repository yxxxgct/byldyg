#include<stdio.h>
main()
{
    int a,i,m;
    printf("������һ��������\n");
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {m=a%i;
    if(m==0) 
	{printf("%d��������\n",a) ;
	return 1;
	 }
	 else
	 i++;
	}
    printf("%d������\n",a);
    return 0;
 } 
 
