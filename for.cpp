#include<stdio.h>
int main()
{  
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int k=7;
    //写一个代码，在arr（有序）中找到7 
	int i=0;
	int sz=sizeof(arr)/sizeof(arr[0]);//计算元素个数 
	for(i=0;i<sz;i++)
	{
		if(k==arr[i])
		{
			printf("找到了，下标是:%d\n",i);
			break;
		}
	}
	if(i==sz)
    printf("找不到\n");
    return 0; 
}
