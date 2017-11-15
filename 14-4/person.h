#pragma once
#ifndef PERSON_H_
#define PERSON_H_

#include <string>
#include <iostream>
using std::endl;
using std::cout;
using std::cin;
using std::string;

class Person
{
private:
	string first;
	string last;
protected:
	virtual void Data();
	virtual void Get();
public:
	Person();
	Person(string f, string l);
	virtual ~Person()=0;
	virtual void Show()=0;
	virtual void Set()=0;
};

class Gunslinger : virtual public Person
{
private:
	int num;//表示枪手枪上的刻痕数 
protected:
	void Data();
	void Get();
	double time;
public:
	Gunslinger();
	Gunslinger(int n,double t);
	~Gunslinger();
	void Draw();
	void Set();
	void Show();
};

class PokerPlayer : virtual public Person
{
protected:
	void Get();
	void Data();
public:
	void Draw();
	PokerPlayer();
	~PokerPlayer();
	void Set();
	void Show();
};

class BadDude : public PokerPlayer, public Gunslinger
{
protected:
	void Get();
	void Data();
public:
	BadDude();
	BadDude(int n, double t);
	~BadDude();
	void Gdraw();
	void Cdraw();
	void Set();
	void Show();
};
#endif // !PERSON_H_
