#include "stdafx.h"
#include "worker.h"
#include <iostream>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;


Worker::~Worker()
{
}

void Worker::Show()const
{
	cout << "Name: " << fullname << endl;
	cout << "Employee ID: " << id << endl;
}

void Worker::Get()
{
	cout << "Enter worker's Name: ";
	getline(cin, fullname);
	cout << "Enter worker's ID: ";
	cin >> id;
	while (cin.get() != '\n')
	{
		continue;
	}
}


Queue::Queue(int qs) : qsize(qs)
{
	front = rear = NULL;
	items = 0;
}

Queue::~Queue()
{
	Node * temp;
	while (front != NULL)
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}

bool Queue::isempty()const
{
	return items == 0;//ע��������==�����ж��Ƿ���ȣ������Ǹ�ֵ�������ȣ�˵������Ϊ��
}

bool Queue::isfull()const
{
	return items == qsize;
}

int Queue::queuecount()const
{
	return items;
}

bool Queue::enqueue(const Item & item)
{
	if (isfull())
	{
		return false;
	}
	Node * add = new Node;
	add->next = NULL;
	add->item = item;
	items++;
	if (front == NULL)//�������һ��Ԫ��Ҳû�У����øý���Ϊ�׽��
	{
		front = add;
	}
	else
	{
		rear->next = add;
	}
	rear = add;//��βָ��ָ��add
	return true;

}

bool Queue::dequeue(Item & item)
{
	if (front == NULL)
	{
		return false;
	}
	item = front->item;
	item.Show();
	items--;
	Node * temp = front;
	front = front->next;
	delete temp;
	if (items == 0)
	{
		rear = NULL;
	}
	return true;
}