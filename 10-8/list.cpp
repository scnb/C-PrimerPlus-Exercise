#include "stdafx.h"
#include "list.h"
#include <iostream>

using namespace std;


 
struct node *  List::creat_List()//Ĭ�Ϲ��캯�����������б�
{
	int len;	
	cout << "�������������";
	cin >> len;
	if (NULL == pHead)
	{
		cout << "�ڴ����ʧ�ܣ�" << endl;
		exit(-1);
	}
	struct node * p = pHead;
	for (int i = 0;i < len;i++)
	{
		struct node * pNew = new(struct node);
		if (NULL == pNew)
		{
			cout << "�ڴ����ʧ�ܣ�";
			exit(-1);
		}
		p->data = 0;
		p->pNext = pNew;
		p = pNew;
		p->pNext = NULL;//һ��Ҫ��ס�����β��
	}
}

bool List::isempty(struct node * pHead)const
{
	if (NULL == pHead->pNext)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool List::insert(struct node *pHead, int pos, int val)
{
	struct node * p = pHead;
	int i = 0;
	while (NULL != p&&i < pos - 1)
	{
		p = p->pNext;
		i++;
	}
	if (i > pos - 1 || NULL == p)//��ֹ postion����������
	{
		return false;
	}
	struct node * pNew = new(struct node);
	pNew->data = val;
	pNew->pNext = p->pNext;
	p->pNext = pNew;
	return true;
}

void List::show(struct node * p)const
{
	cout << "���ݵ��� = " << p->data << endl;
}

void List::visit(struct node * pHead,void(*pf)(struct node * &))
{
	struct node * p = pHead;
	while (NULL != p)
	{
		(*pf)(p);
		p++;
	}
}