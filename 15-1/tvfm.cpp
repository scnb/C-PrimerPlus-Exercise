#include "stdafx.h"
#include <iostream>
#include "tvfm.h"

using std::cin;
using std::cout;
using std::endl;

bool Tv::volup()
{
	if (volume == MaxVal)
	{
		cout << "�����Ѿ�����޷��ϵ���\n";
		return false;
	}
	else
	{
		volume++;
		return true;
	}
}

bool Tv::voldown()
{
	if (volume == MinVal)
	{
		cout << "�����Ѿ���С���޷��µ���\n";
		return false;
	}
	else
	{
		volume--;
		return true;
	}
}

void Tv::chanup()
{
	if (channel == maxchannel)
	{
		channel = 0;
	}
	else
	{
		channel++;
	}
}

void Tv::chandown()
{
	if (channel == 0)
	{
		channel == maxchannel;
	}
	else
	{
		channel--;
	}
}

/*display all settings*/
void Tv::settings() const
{
	cout << "State: " << state << endl;
	cout << "Volume: " << volume << endl;
	cout << "Maxchannel: " << maxchannel << endl;
	cout << "Channel: " << channel << endl;
	cout << "Mode: " << mode << endl;
	cout << "Input: " << input << endl;
}

