// 16-10.cpp : �������̨Ӧ�ó������ڵ㡣
//
/*
�������д����Ե�����STL������
��for_each()������������������ǰ����������ָ������������ĵ����������һ��������һ����������
for_each()�����Ѻ����������������е�ÿһ��Ԫ�ء��������������޸�������Ԫ�ص�ֵ��
������for_each()��������forѭ�����磺
for_each(books.begin(),books.end(),ShowReview);//����books�����е�ÿһ��Ԫ��ʹ��ShowReview����

��random_shuffle()���ú�����������ָ����������ĵ���������������Ԫ�ؽ�������������������
�ܹ�������ʡ�
�磺
random_shuffle(books.begin(),books.end());

��sort()���ú���ҲҪ�������ܹ�����������ʣ����Ҹú����������汾��
�汾1����ȫ���򣩸ú�����������ָ������ĵ�������������������Ԫ��ʹ��Ԫ���������õ�<�������������
�汾2�������������򣩸ú�����������������ǰ����������ָ������ĵ��������������һ�������Ǻ�������
������Ԫ��ʹ�øú��������������
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
	cout << "�����м����飺";
	int N;
	cin >> N;
	vector<shared_ptr<Review>> Books;				//��vector����������ָ��Review�ṹ������ָ��
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
		cout << "ѡ��һ�����������ʽ��" << endl;
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
			cout << "ѡ��һ�����������ʽ��" << endl;
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




