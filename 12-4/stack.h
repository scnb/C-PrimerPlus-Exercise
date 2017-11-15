#pragma once
#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;

class Stack
{
private:
	enum { MAX = 10 };
	Item * pitems;
	int size;//栈中的成员个数
	int top;//索引
public:
	Stack(int n = MAX);
	Stack(const Stack & st);//复制构造函数
	~Stack();
	bool isempty()const;
	bool isfull()const;
	bool push(const Item & item);
	bool pop(Item & item);
	void operator=(const Stack & st);
};
#endif