// 15-2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include "exc_mean.h"

using std::cin;
using std::cout;
using std::endl;

double hmean(double a, double b);
double gmean(double a, double b);

int main()
{
	double x, y, z;
	cout << "Enter two numbers:";
	while (cin >> x >> y)
	{
		try
		{
			z = hmean(x, y);
			cout << "Harmonic mean of " << x << " and " << y << " is " << z << endl;
			cout << "Geometric mean of " << x << " and " << y << " is " << gmean(x, y) << endl;
			cout << "Enter next set of numbers <q to quit>:";
		}
		catch (bad_hmean & bg)
		{
			cout << bg.what() << endl;//�������Ҫ��cout�������Ϊwhat()�������ص���һ���ַ�����������Ҫ��cout���
			bg.mesg();
			cout << "Try again.\n";
			continue;
		}
		catch (bad_gmean & bg)
		{
			cout << bg.what() << endl;//�������Ҫ��cout�������Ϊwhat()�������ص���һ���ַ�����������Ҫ��cout���
			cout<<bg.mesg();//�������Ҫ��cout�������Ϊmesg()�������ص���һ���ַ�����������Ҫ��cout���
			cout << "Values used : " << bg.v1 << ", " << bg.v2 << endl;
			cout << "Try again.\n";
			continue;
		}
	}
	getchar();
	getchar();
	return 0;
}

double hmean(double a, double b)
{
	if (a == -b)
	{
		throw bad_hmean(a, b);
	}
	return 2.0*a*b / (a + b);
}

double gmean(double a, double b)
{
	if (a < 0 || b < 0)
	{
		throw bad_gmean(a, b);
	}
	return sqrt(a*b);
}
