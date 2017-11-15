// 11-3.cpp : 定义控制台应用程序的入口点。
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
	srand(time(0));//随机种子发生器
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
	cout << "输入循环次数：";
	cin >> N;
	int i = 1;
	cout << "Enter target distance(q to quit):";//输入目标距离
	while (cin >> target&&i<=N)
	{
		cout << "Enter step length:";//输入步长
		if (!(cin >> dstep))
		{
			break;
		}
		while (result.magval() < target)
		{
			direction = rand() % 360;//360度一周，向各个方向走，其实是角度，在这种情况下用角度比较方便
			step.reset(dstep, direction, Vector::POL);//重新计算位移，更新对应的值
			result = result + step;//result是直角坐标类型的;
			steps++;//记录一共走了多少步
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
	cout << "最大步数：" << max_step << endl;
	cout << "最小步数：" << min_step << endl;
	cout << "总共步数：" << total_step << endl;
	cout << "Bye!\n";
	cin.clear();
	getchar();
	while (cin.get() != '\n')//等待按回车结束
	{
		continue;
	}
	return 0;
}
