// 16-6.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <queue>
#include "queue.h"
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::queue;

bool newcustomer(double x);


const int MIN_PER_HR = 60;//һ��Сʱ��60����

int main()
{
	using std::ios_base;
	std::srand(std::time(0));
	cout << "Case Study:Bank of Heather Automatic Teller\n";
	queue<Item> line;										//queueģ������Ҫ����ģ�������һ����Ԫ�����ͣ�һ�����������ͣ�Ԫ�������Ǳ���ģ����������ǿ�ѡ�ġ�
	cout << "Enter the number of simulation hours:";
	int hours;
	cin >> hours;
	long cyclelimit = MIN_PER_HR*hours;						//��Ϊһ��ѭ����һ����ʱ�䣬�����ܵķ����������ܵ�ѭ������
	cout << "Enter the average number of customers per hour:";
	double perhour;
	cin >> perhour;
	double min_per_cust;
	min_per_cust = MIN_PER_HR / perhour;					//һ��Сʱ��ʱ���������һСʱ���ж�������������ÿ����ռ�ü�����
	Item temp;												//�¿��˵���Ϣ
	long turnaways = 0;										//������������뿪��
	long customers = 0;										//������е�����
	long served = 0;										//���շ��������
	long sum_line = 0;										//������еĳ���
	int wait_time = 0;										//һ�����˵ĵȴ�ʱ��
	long line_wait = 0;										//�����ڶ�����ȴ���ʱ��
															//��ʼģ��
	for (int cycle = 0;cycle < cyclelimit;cycle++)
	{
		if (newcustomer(min_per_cust))						//����п�������
		{
			if (line.size() == 10)							//�Զ�������10����Ϊ�ж϶����Ƿ����ı�ʶ
			{
				turnaways++;
			}
			else
			{
				customers++;
				temp.set(cycle);
				line.push(temp);							//��temp��ӵ�����ĩβ
			}
		}
		if (wait_time <= 0 && !line.empty())				//������в�Ϊ�գ����ҵȴ�ʱ���Ѿ�����0�ˣ���Ӧ�ó�����
		{
			line.pop();
			wait_time = temp.ptime();
			line_wait += cycle - temp.when();				//cycle��ʵҲ��ʵʱʱ��һ�£���ȥ����ʱ������ڶ����ֵĵȴ�ʱ��
			served++;
		}
		if (wait_time > 0)									//�ȴ�ʱ�����0�������ڵȴ��У�һ��cycle����wait_time��һ�������ȥ��һ����
		{
			wait_time--;
		}
		sum_line += line.size();							//��������е�������
	}
															//������
	if (customers > 0)
	{
		cout << "Customers accepted: " << customers << endl;
		cout << "  Customers served: " << served << endl;
		cout << "         turnaways: " << turnaways << endl;
		cout << "average queue size: ";
		cout.precision(2);									//����С����Ϊ2λ
		cout.setf(ios_base::fixed, ios_base::floatfield);
		cout << (double)sum_line / cyclelimit << endl;
		cout << " average wait time: " << (double)line_wait / served << " minutes\n";
	}
	else
	{
		cout << "No customers!\n";
	}
	cout << "Done!\n";
	getchar();
	getchar();
	return 0;
}

bool newcustomer(double x)									//x�����ڿͻ������ƽ��ʱ����
{
	return (std::rand()*x / RAND_MAX < 1);
}