// 11-1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "vector.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

int main()
{
	using namespace std;
	using VECTOR::Vector;
	ofstream fout;
	fout.open("thewalker.txt");
	srand(time(0));//������ӷ�����
	double direction;
	Vector step;
	Vector result(0, 0);
	unsigned long steps = 0;
	double target;
	double dstep;
	cout << "Enter target distance (q to quit):";//����Ŀ�����
	while (cin >> target)
	{
		cout << "Enter step length:";//���벽��
		if (!(cin >> dstep))
		{
			break;
		}
		fout << "Target Distance: " << target << ", Step Size: " << dstep << endl;
		int i = 0;
		while (result.magval() < target)
		{
			direction = rand() % 360;//360��һ�ܣ�����������ߣ���ʵ�ǽǶȣ�������������ýǶȱȽϷ���
			step.reset(dstep, direction, Vector::POL);//���¼���λ�ƣ����¶�Ӧ��ֵ
			result = result + step;//result��ֱ���������͵�
			fout << i++ << ": " << result << endl;
			steps++;//��¼һ�����˶��ٲ�
		}
		fout << "After " << steps << " steps,the subject has the following location:\n";
		fout << result;
		result.polar_mode();//����Ϊ������ģʽ
		fout << "or\n" << result << endl;
		fout << "Average outward distance per step = " << result.magval() / steps << endl;
		steps = 0;
		result.reset(0, 0);
		cout << "Enter target distance (q to quit):";
	}
	cout << "Bye!\n";
	cin.clear();
	while (cin.get() != '\n')//�ȴ����س�����
	{
		continue;
	}
	return 0;
}
