#pragma once
#ifndef WORKERMI_H_
#define WORKERMI_H_

#include <string>

class Worker
{
private:
	std::string fullname;
	long id;
public:
	Worker() : fullname("no one"), id(0L) {}
	Worker(const std::string & s, long n) : fullname(s), id(n) {}
	~Worker() = 0;
	void Data()const;
	void Get();
	void Set();
	void Show()const;
};

template<typename T>
class QueueTp
{
private:
	struct Node { T item;struct Node * next; };
	enum { Q_SIZE = 10 };
	Node * front;//ͷָ��
	Node * rear;//βָ��
	int items;//�������ж��ٸ�Ԫ��
	const int qsize;//˽�����ݳ�Ա������const���ͣ�ֻ��ͨ����Ա��ʼ���б���г�ʼ��
	QueueTp(const QueueTp & q) :qsize(0) {}//���ó�˽�еĸ��ƹ��캯��
	QueueTp & operator=(const QueueTp & q) { return *this; }//���ó�˽�е����ظ�ֵ�����
public:
	QueueTp(int qs = Q_SIZE);
	~QueueTp();
	bool isempty()const;
	bool isfull()const;
	int queuecount()const;//����Ԫ�ظ���
	bool enqueue(const Item & item);//���Ԫ��
	bool dequeue(Item & item);//ɾ��Ԫ��
};
#endif // !WORKERMI_H_
