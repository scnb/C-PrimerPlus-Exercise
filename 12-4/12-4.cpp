// 12-4.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "stack.h"
#include <iostream>
#include <cctype>

int main()
{
	using namespace std;
	unsigned long po;
	Stack st1;
	Stack st2(5);
	Stack st3 = st2;
	Stack st4;
	char ch;
	
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
		case 'a':cout << "Enter a PO number to add: ";
			cin >> po;
			if (st1.isfull())
			{
				cout << "Stack is already full.\n";
			}
			else
			{
				st1.push(po);
			}
			break;
		case 'p':
		case 'P':
			if (st1.isempty())
			{
				cout << "Stack is already empty.\n";
			}
			else
			{
				st1.pop(po);
				cout << "PO # " << po << " popped.\n";
			}
			break;
		}
		cout << "Please enter A to add a purchase order.\n" << "P to process a PO,Q to quit.\n";
	}
	cout << "ɾ��st3�� " << endl;
	st3.pop(po);
	cout << "PO # " << po << " popped.\n";
	st3.pop(po);
	cout << "PO # " << po << " popped.\n";
	st3.pop(po);
	cout << "PO # " << po << " popped.\n";
	st3.pop(po);
	cout << "PO # " << po << " popped.\n";
	st3.pop(po);
	cout << "PO # " << po << " popped.\n";
	
	st4 = st1;
	cout << "ɾ��st4��" << endl;
	st4.pop(po);
	cout << "PO # " << po << " popped.\n";
	st4.pop(po);
	cout << "PO # " << po << " popped.\n";
	st4.pop(po);
	cout << "PO # " << po << " popped.\n";
	st4.pop(po);
	cout << "PO # " << po << " popped.\n";

	
	cout << "Bye\n";
	getchar();
	getchar();
	return 0;
}
