// 11-7.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "complex0.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{

	Complex a(3.0, 4.0);
	Complex c;
	cout << "Enter a complex number (q to quit)\n";
	while (cin >> c)
	{
		cout << "c is " << c << '\n';
		cout << "complex conjugate is " << ~c << '\n';
		cout << "a + c is " << a + c << '\n';
		cout << "a - c is " << a - c << '\n';
		cout << "a * c is " << a*c << '\n';
		cout << "2 * c is " << 2 * c << '\n';
		cout << "Enter a complex number (q to quit):\n";
	}
	cout << "Bye\n";
	getchar();
	getchar();
    return 0;
}

