// 5-4.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	float val_Daphne=100;
	float val_Cleo = 100;
	float pro_Cleo =0, pro_Daphne =10;
	while (pro_Cleo <= pro_Daphne)
	{
		pro_Cleo = 0.05*val_Cleo;
		val_Cleo = val_Cleo + pro_Cleo;
	}
	cout << "CleoĿǰ��Ͷ�ʼ�ֵ��" << pro_Cleo << endl;
	cout << "DaphneĿǰ��Ͷ�ʼ�ֵ��" << pro_Daphne << endl;
	getchar();
    return 0;
}

