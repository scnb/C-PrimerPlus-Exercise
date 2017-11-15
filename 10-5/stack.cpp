
#include "stdafx.h"
#include "stack.h"
#include <iostream>



Stack::Stack() //Ĭ�Ϲ��캯��
{
	top = 0;
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
		items[top++] = item;
		return true;
	}
	else
	{
		return false;
	}
}

bool Stack::pop(Item & item)
{

	static double total = 0;
	if (top > 0)
	{
		item = items[--top];
		total += item.payment;
		std::cout << "���� = " << total << std::endl;
		return true;
	}
	else
	{
		return false;
	}
}