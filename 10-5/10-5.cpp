// 10-5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "stack.h"
#include <iostream>
#include <cctype>


int main()
{
	using namespace std;
	Stack st;
	char ch;
	customer po;
	cout << "Please enter A to add a purchaase order,\n" << "P to process a PO,or Q to quit.\n";
	while (cin >> ch&&toupper(ch) != 'Q')
	{
		while (cin.get() != '\n')
		{
			continue;
		}
		if (!isalpha(ch))
		{
			cout << '\a';
			continue;
		}
		switch (ch)
		{
		case 'A':
		case 'a':cout << "Enter a PO fullname: ";
			cin >> po.fullname;
			cout << "Enter a PO payment: ";
			cin >> po.payment;
			if (st.isfull())
			{
				cout << "Stack is already full.\n";
			}
			else
			{
				st.push(po);
			}
			break;
		case 'p':
		case 'P':
			if (st.isempty())
			{
				cout << "Stack is already empty.\n";
			}
			else
			{
				st.pop(po);
				cout << "PO # " << po .fullname<< " popped.\n";
			}
			break;
		}
		cout << "Please enter A to add a purchase order.\n" << "P to process a PO,Q to quit.\n";
	}
	cout << "Bye\n";
	return 0;
}

