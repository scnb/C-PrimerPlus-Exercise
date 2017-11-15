#include "stdafx.h"
#include "list.h"
#include <iostream>

using namespace std;


 
struct node *  List::creat_List()//默认构造函数，创建空列表
{
	int len;	
	cout << "请输入结点个数：";
	cin >> len;
	if (NULL == pHead)
	{
		cout << "内存分配失败！" << endl;
		exit(-1);
	}
	struct node * p = pHead;
	for (int i = 0;i < len;i++)
	{
		struct node * pNew = new(struct node);
		if (NULL == pNew)
		{
			cout << "内存分配失败！";
			exit(-1);
		}
		p->data = 0;
		p->pNext = pNew;
		p = pNew;
		p->pNext = NULL;//一定要堵住链表的尾部
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
	if (i > pos - 1 || NULL == p)//防止 postion不满足条件
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
	cout << "数据等于 = " << p->data << endl;
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