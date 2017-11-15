#pragma once
#ifndef LIST_H_
#define LIST_H_


class List
{
private:
	struct node
	{
		int data;
		struct node * pNext;
	}*pHead;
public:
	
	struct node *  creat_List();//创建空列表，带参数的构造函数
	bool isempty(struct node *pHead) const;
	bool insert(struct node *pHead,int pos,int val);
	void show(struct node *) const;
	void visit(struct node * pHead,void(*pf)(struct node * &));
};

#endif // !LIST_H_
