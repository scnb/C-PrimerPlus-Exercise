
#include "stdafx.h"
#include "stack.h"

#include <iostream>

using std::cout;

Stack::Stack(int n) //构造函数,在函数定义这里，不能写成 int n = MAX,否则就是重定义了
{
	size = n;
	pitems = new Item[n];
	if (n == MAX)
	{
		for (int i = 0;i < n;i++)
		{
			pitems[i] = MAX;
		}
		top = MAX;
	}
	else
	{
		for (int i = 0;i < n;i++)
		{
			pitems[i] = n;
		}
		top = n;
	}
	
}

Stack::Stack(const Stack & st)//复制构造函数，用于对象初始化
{
	size = st.size;
	top = st.top;
	pitems = new Item[size];
	for (int i = 0;i < size;i++)
	{
		pitems[i] = st.pitems[i];
	}
}

Stack::~Stack()
{
	delete[] pitems;
}

bool Stack::isempty() const
{
	return top == 0;
}

bool Stack::isfull() const
{
	return top == MAX;
}

bool Stack::push(const Item & item)
{
	if (top < MAX)
	{
		pitems[top++] = item;
		return true;
	}
	else
	{
		cout << "Stack is already full.\n";
		return false;
	}
}

bool Stack::pop(Item & item)
{
	if (top > 0)
	{
		item = pitems[--top];
		return true;
	}
	else
	{
		cout << "Stack is already empty.\n";
		return false;
	}
}

void Stack::operator=(const Stack & st)
{
	this->size = st.size;
	this->top = st.top;
	this->pitems = new Item[size];
	for (int i = 0;i < this->size;i++)
	{
		this->pitems[i] = st.pitems[i];
	}
}