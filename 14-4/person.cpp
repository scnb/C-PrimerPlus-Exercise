#include "stdafx.h"
#include "person.h"
#include <ctime>
#include <cstdlib>

Person::Person()
{
	first = "Jane";
	last = "Doe";
}

Person::Person(string f,string l)
{
	first = f;
	last = l;
}

void Person::Get()
{
	cout << "Enter the first name: ";
	cin >> first;
	cout << "Enter the last name: ";
	cin >> last;
}

Person::~Person()
{

}

void Person::Data()
{
	cout << "First Name: " << first << endl;
	cout << "Last Name: " << last << endl;
}

Gunslinger::Gunslinger()
{
	num = 0;
	time = 0;
}

Gunslinger::Gunslinger(int n,double t)
{
	num = n;
	time = t;
}

Gunslinger::~Gunslinger()
{

}

void Gunslinger::Draw()
{
	cout << "Time of taking gun: ";
	cout << time;
}

void Gunslinger::Get()
{
	cout << "Enter the number of gun's 刻痕: ";
	cin >> num;
	cout << "Enter the time of taking guns: ";
	cin >> time;
}

void Gunslinger::Set()
{
	Person::Get();
	Get();
}


void Gunslinger::Data()
{
	cout << "Num: " << num << endl;
	cout << "Time: " << time << endl;
}

void Gunslinger::Show()
{
	Person::Data();
	Data();
}

PokerPlayer::PokerPlayer()
{
}

PokerPlayer::~PokerPlayer()
{
}

void PokerPlayer::Get()
{

}

void PokerPlayer::Set()
{
	Person::Get();
}

void PokerPlayer::Draw()
{
	cout << "Next card's value is: ";
	std::srand(std::time(0));
	int temp = std::rand() % 52;
	cout<<temp;
}

void PokerPlayer::Data()
{
	Draw();
}

void PokerPlayer::Show()
{
	Person::Data();
	Data();
}


BadDude::BadDude() :PokerPlayer(), Gunslinger()
{

}

void BadDude::Get()
{
	Gunslinger::Get();
	PokerPlayer::Get();
}

BadDude::BadDude(int n, double t) : PokerPlayer(), Gunslinger(n, t)
{
}

BadDude::~BadDude()
{
}

void BadDude::Set()
{
	Person::Get();
	Get();
}

void BadDude::Gdraw()
{
	 Gunslinger::Draw();
}

void BadDude::Cdraw()
{
	PokerPlayer::Draw();
}

void BadDude::Data()
{
	Gunslinger::Data();//正常执行
	PokerPlayer::Data();//不正常执行，card不能输出
	cout << endl;
	Gdraw();
}


void BadDude::Show()
{
	Person::Data();
	Data();
	cout << endl;
}