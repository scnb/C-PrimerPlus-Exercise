// 4-5.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
struct CandyBar
{
	//char brand[20];   //�ڽṹ���ò���string�ࣿ ��Ϊ��using namespace stdд����main�������棬�����޷���main�����ⲿʶ��
	string brand;
	float weight;
	int carol;
};

int main()
{
	struct CandyBar snack = {
		"Mocha Munch",
		2.3,
		350,
	};
	cout << snack.brand << endl;
	cout << snack.weight << endl;
	cout << snack.carol << endl;
	getchar();
    return 0;
}

