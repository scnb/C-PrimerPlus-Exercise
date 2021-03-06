#pragma once
#ifndef WORKER_H_
#define WORKER_H_

#include <string>

class Worker
{
private:
	std::string fullname;
	long id;
public:
	Worker() : fullname("no one"), id(0L) {}
	Worker(const std::string & s, long n) : fullname(s), id(n) {}
	~Worker();
	void Get();
	void Show()const;
};

typedef Worker Item;

class Queue
{
private:
	struct Node { Item item;struct Node * next; };
	enum { Q_SIZE = 10 };
	Node * front;//头指针
	Node * rear;//尾指针
	int items;//队列种有多少个元素
	const int qsize;//私有数据成员，还是const类型，只能通过成员初始化列表进行初始化
	Queue(const Queue & q) :qsize(0) {}//设置成私有的复制构造函数
	Queue & operator=(const Queue & q) { return *this; }//设置成私有的重载赋值运算符
public:
	Queue(int qs = Q_SIZE);
	~Queue();
	bool isempty()const;
	bool isfull()const;
	int queuecount()const;//返回元素个数
	bool enqueue(const Item & item);//添加元素
	bool dequeue(Item & item);//删除元素
};

#endif // !WORKERMI_H_
