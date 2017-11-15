// 5-4.cpp : 定义控制台应用程序的入口点。
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
	cout << "Cleo目前的投资价值：" << pro_Cleo << endl;
	cout << "Daphne目前的投资价值：" << pro_Daphne << endl;
	getchar();
    return 0;
}

