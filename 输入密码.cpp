#include<stdio.h>
#include<string.h>
main()
{
	int i=0;
	char password[20]={0};
	for(i=0;i<3;i++)
	{
		printf("����������:>");
		scanf("%s",password);
		if(strcmp(password,"123456")==0)//�ȺŲ��������Ƚ������ַ����Ƿ���� 
		{
			printf("��¼�ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		 } 
	}
	if(i==3)
	  printf("�������붼�����˳�����\n");
	return 0;
}
