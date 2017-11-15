#pragma once
#ifndef STACK_H_
#define STACK_H_

struct customer
{
	char fullname[25];
	double payment;
};

typedef customer Item;

class Stack
{
private:
	enum { MAX = 10 };
	Item items[MAX];//结构数组
	int top;//索引
public:
	Stack();
	bool isempty()const;
	bool isfull()const;
	bool push(const Item & item);
	bool pop(Item & item);
};
#endif