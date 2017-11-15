// 7-4.cpp : 定义控制台应用程序的入口点。
//有问题，计算不出结果来
//问题出现在probability函数中，for循环的判断语句，应该是p>0,而我写成了picks>0;这就导致程序陷入了死循环，可怕的是这个错误编译器检测不出来，而我又不够细心检查出来。


#include "stdafx.h"
#include <iostream>
using namespace std;
long double probability(int numbers, int picks);

int main()
{
	int numbers_1, picks_1, numbers_2, picks_2;
	long double result_1, result_2;
	cout << "输入第一组一共的数字和选择的张数:";
	cin >> numbers_1;
	cin >> picks_1;

	cout << "输入第二组一共的数字和选择的张数:";
	cin >> numbers_2;
	cin >> picks_2;
	result_1 = probability(numbers_1, picks_1);
	cout << result_1 << endl;

	result_2 = probability(numbers_2, picks_2);
	cout << "获奖的概率为：" << 1/(result_1*result_2);
	getchar();
	getchar();
    return 0;
}

long double probability(int numbers, int picks)
{
	long double result = 1.0;
	long double n;
	int p;
	for (n = numbers, p = picks;p >0;n--, p--)
	{
		result = result*n / p;
	}
	return result;
}

