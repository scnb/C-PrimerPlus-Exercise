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
	Node * front;//ͷָ��
	Node * rear;//βָ��
	int items;//�������ж��ٸ�Ԫ��
	const int qsize;//˽�����ݳ�Ա������const���ͣ�ֻ��ͨ����Ա��ʼ���б���г�ʼ��
	Queue(const Queue & q) :qsize(0) {}//���ó�˽�еĸ��ƹ��캯��
	Queue & operator=(const Queue & q) { return *this; }//���ó�˽�е����ظ�ֵ�����
public:
	Queue(int qs = Q_SIZE);
	~Queue();
	bool isempty()const;
	bool isfull()const;
	int queuecount()const;//����Ԫ�ظ���
	bool enqueue(const Item & item);//���Ԫ��
	bool dequeue(Item & item);//ɾ��Ԫ��
};

#endif // !WORKERMI_H_
