#include<stdio.h>
main()
{
    int a=1500,b,lr;
    float gz;
    printf("该月利润lr为：");
	scanf("%d",&lr);
	b=(lr-1)/1000;
	switch(b)
	{   case 0:gz=a;break;
		case 1:gz=a+lr*0.1;break;
		case 2:
		case 3:
		case 4:gz=a+lr*0.15;break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:gz=a+lr*0.2;break;
		default:gz=a+lr*0.25;break;
	}
	printf("该程序员的工资为%f:",gz);
	return 0;
}
