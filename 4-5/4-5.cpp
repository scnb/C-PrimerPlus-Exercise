// 4-5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
struct CandyBar
{
	//char brand[20];   //在结构中用不了string类？ 因为把using namespace std写在了main函数里面，所以无法在main函数外部识别
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

