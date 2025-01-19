#include<stdio.h>
#include<string.h>
#include<windows.h> 
main()
{
	char arr1[]="welcome to bit!!!!!!";
	char arr2[]="####################";
	//编写代码，演示多个字符从两端移动向中间汇集 
	int left=0;
	int right=strlen(arr1)-1;
	while(left<=right)
    {
	  arr2[left]=arr1[left];
	  arr2[right]=arr1[right];
	  printf("%s\n",arr2);
	  Sleep(1000);//休息一秒 
	  left++;
	  right--; 
	}
	
	return 0;
 } 
