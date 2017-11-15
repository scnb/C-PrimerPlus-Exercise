#pragma once
#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;

class Stack
{
private:
	enum { MAX = 10 };
	Item * pitems;
	int size;//ջ�еĳ�Ա����
	int top;//����
public:
	Stack(int n = MAX);
	Stack(const Stack & st);//���ƹ��캯��
	~Stack();
	bool isempty()const;
	bool isfull()const;
	bool push(const Item & item);
	bool pop(Item & item);
	void operator=(const Stack & st);
};
#endif