// 14-4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "person.h"
#include <iostream>
#include <cstring>

const int SIZE = 2;

int main()
{
	Person * lolas[SIZE];
	int ct;
	for (ct = 0;ct < SIZE;ct++)
	{
		char choice;
		cout << "Enter the kind of Person: \n";
		cout << "g: gunslinger	p: pokerplayer	b: baddude	q: quit\n";
		cin >> choice;
		while (strchr("gpbq", choice) == NULL)
		{
			cout << "Please enter a g,p,b ot q: ";
			cin >> choice;
		}
		if (choice == 'q')
		{
			break;
		}
		switch (choice)
		{
		case 'g':lolas[ct] = new Gunslinger;break;
		case 'p':lolas[ct] = new PokerPlayer;break;
		case 'b':lolas[ct] = new BadDude;break;
		}
		cin.get();
		lolas[ct]->Set();
	}
	cout << "\nHere are the persons: \n";
	int i;
	for (i = 0;i < SIZE;i++)
	{
		cout << endl;
		lolas[i]->Show();
	}
	for (i = 0;i < ct;i++)
	{
		delete lolas[i];
	}
	cout << "Bye.\n";
	getchar();
	getchar();
    return 0;
}

