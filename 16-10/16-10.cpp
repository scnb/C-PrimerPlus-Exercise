// 16-10.cpp : 定义控制台应用程序的入口点。
//
/*
三个具有代表性的其他STL函数：
①for_each()：它接受三个参数，前两个参数是指定容器中区间的迭代器，最后一个参数是一个函数对象。
for_each()函数把函数参数用于容器中的每一个元素。函数参数不能修改容器中元素的值。
可以用for_each()函数代替for循环，如：
for_each(books.begin(),books.end(),ShowReview);//即对books对象中的每一个元素使用ShowReview方法

②random_shuffle()：该函数接受两个指定容器区间的迭代器，并对其间的元素进行随机排序。容器必须得
能够随机访问。
如：
random_shuffle(books.begin(),books.end());

③sort()：该函数也要求容器能够进行随机访问，并且该函数有两个版本。
版本1：（全排序）该函数接受两个指定区间的迭代器参数，并对其间的元素使用元素类型内置的<运算符进行排序。
版本2：（完整弱排序）该函数接受三个参数，前两个参数是指定区间的迭代器参数，最后一个参数是函数对象。
对其间的元素使用该函数对象进行排序。
*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>
#include "review.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::shared_ptr;


int main()
{
	cout << "输入有几本书：";
	int N;
	cin >> N;
	vector<shared_ptr<Review>> Books;				//该vector容器里存的是指向Review结构的智能指针
	shared_ptr<Review> temp(new Review);
	char input;
	
	for (int i = 0;i < N;i++)
	{
		temp = FillReview();
		Books.push_back(temp);
	}
	//for_each(Books.begin(), Books.end(), ShowReview);
	if (Books.size() > 0)
	{
		cout << "选择一种排序输出方式：" << endl;
		Show_Choice();
		while (cin >> input)
		{
			if (input == 'q')
			{
				break;
			}
			switch (input)
			{
			case 'a':Sort_Increase(Books);break;
			case 'b':Sort_Decrease(Books);break;
			case 'c':Sort_Rating_Increase(Books);break;
			case 'd':Sort_Rating_Decrease(Books);break;
			}
			cout << "选择一种排序输出方式：" << endl;
			Show_Choice();
		}
	}
	else
	{
		cout << "No entries.";
	}
	cout << "Bye\n";
	getchar();
	return 0;
}




