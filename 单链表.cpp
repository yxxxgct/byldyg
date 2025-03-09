#include<stdio.h>
#include<stdlib.h>

typedef int ElemType;

typedef struct node{
	ElemType data;
	struct node *next;
}Node;

//��������
Node* initList()
{
	Node *head=(Node*)malloc(sizeof(Node));
	head->data=0;
	head->next=NULL;
	return head;
 } 
 
//ͷ�巨
 int insertHead(Node* L,ElemType e)
 {
 	Node *p=(Node*)malloc(sizeof(Node));
 	p->data=e;
 	p->next=L->next;
 	L->next=p;
 	return 1;
  } 
  
//����
 void listNode(Node* L)
{
	Node *p=L->next;
	while(p!=NULL)
	{
		printf("%d",p->data);
		p=p->next;
	}
	printf("\n");
 }  
 
 //��ȡβ�����
 //Node* get_tail(Node *L)
 //{
 	//Node *p=L;
 	//while(p->next!=NULL)
 	//{
 		//p=p->next;
	//}
	//return p;
  //} 
 
//β�巨
//Node*insertTail(Node *tail,ElemType e)
//{
	//Node *p=(Node*)malloc(sizeof(Node));
	//p->data=e;
	//tail->next=p;
	//p->next=NULL;
	//return p;
// } 

//ָ��λ�ò���
int insertNode(Node *L,int pos,ElemType e)
{
	//�����������λ�õ�ǰ���ڵ�
	Node *p=L;
	int i=0;
	//���������ҵ�����λ�õ�ǰ���ڵ�
	while(i<pos-1)
	{
		p=p->next;
		i++;
		if(p==NULL)
		{
			return 0;
		}
	 } 
	 
	 //Ҫ������½ڵ�
	 Node *q=(Node*)malloc(sizeof(Node));
	 q->data=e;
	 q->next=p->next;
	 p->next=q;
	 return 1; 
}

//ɾ���ڵ�
int deleteNode(Node *L,int pos)
{
	//Ҫɾ���ڵ��ǰ��
	Node *p=L;
	int i=0;
	//���������ҵ�Ҫɾ���ڵ��ǰ��
	while(i<pos-1)
	{
		p=p->next;
		i++;
		if(p==NULL)
		{
			return 0;
		}
	 } 
	 
	 if(p->next==NULL)
	 {
	 	printf("Ҫɾ����λ�ô���\n");
	 	return 0;
	 }
	 //qָ��Ҫɾ���Ľڵ�
	 Node *q=p->next;
	 //��Ҫɾ���ڵ��ǰ��ָ��Ҫɾ���ڵ�ĺ��
	 p->next=q->next;
	 //�ͷ�Ҫɾ���ڵ���ڴ�ռ�
	 free(q);
	 return 1; 
}

//��ȡ������
int listLength(Node *L)
{
	Node *p=L;
	int len=0;
	while(p!=NULL)
	{
		p=p->next;
		len++;
	}
	return len;
 } 
 
//�ͷ�����
void freeList(Node *L)
{
 	Node *p=L->next;
 	Node *q;
 	
 	while(p!=NULL)
 	{
 		q=p->next;
 		free(p);
 		p=q;
	 }
	 L->next=NULL;
  } 
 
int main(int argc,char const *argv[]) 
{
	Node *list=initList();
//  Node *tail=get_tail(list);
	insertHead(list,10);
	insertHead(list,20);
	insertHead(list,30);
	listNode(list);
	insertNode(list,2,15);
	listNode(list);
	deleteNode(list,2);
	listNode(list);
	printf("%d\n",listLength(list));
	freeList(list);
	printf("%d\n",listLength(list));
	return 0;
}
