// 11-3.cpp : �������̨Ӧ�ó������ڵ㡣
//


#include "stdafx.h"
#include "vector.h"
#include <iostream>
#include <cstdlib>
#include <ctime>


int main()
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));//������ӷ�����
	double direction;
	Vector step;
	Vector result(0, 0);
	unsigned long steps = 0;
	double target;
	double dstep;
	int max_step = 0;
	int min_step = 0;
	int total_step = 0;
	int N = 0;
	cout << "����ѭ��������";
	cin >> N;
	int i = 1;
	cout << "Enter target distance(q to quit):";//����Ŀ�����
	while (cin >> target&&i<=N)
	{
		cout << "Enter step length:";//���벽��
		if (!(cin >> dstep))
		{
			break;
		}
		while (result.magval() < target)
		{
			direction = rand() % 360;//360��һ�ܣ�����������ߣ���ʵ�ǽǶȣ�������������ýǶȱȽϷ���
			step.reset(dstep, direction, Vector::POL);//���¼���λ�ƣ����¶�Ӧ��ֵ
			result = result + step;//result��ֱ���������͵�;
			steps++;//��¼һ�����˶��ٲ�
		}
		total_step += steps;
		if (i == 1)
		{
			max_step = min_step = steps;
		}
		if (steps > max_step)
		{
			max_step = steps;
		}
		if (steps < min_step)
		{
			min_step = steps;
		}
		steps = 0;
		i++;
		if (i <= N)
		{
			cout << "Enter target distance (q to quit):";
		}
		else
		{
			break;
		}
	}
	cout << "�������" << max_step << endl;
	cout << "��С������" << min_step << endl;
	cout << "�ܹ�������" << total_step << endl;
	cout << "Bye!\n";
	cin.clear();
	getchar();
	while (cin.get() != '\n')//�ȴ����س�����
	{
		continue;
	}
	return 0;
}
