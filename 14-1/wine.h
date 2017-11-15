#pragma once
#ifndef WINE_H_
#define WINE_H_
#include <valarray>
#include <iostream>
#include <string>
#include <utility>

using std::cin;
using std::cout;
using std::string;
using std::endl;


typedef std::valarray<int> ArrayInt;
typedef std::pair<std::valarray<int>,std::valarray<int>> PairArray;

class Wine
{
private:
	string brand;
	PairArray p;
	int year;//能存储几年，是年数
public:
	Wine();
	Wine(const char * l,int y,const int yr[],const int bot[]);
	Wine(const char * l, int y);
	~Wine();
	void GetBottles();
	int sum()const;
	string & label();
	void Show()const;
};


#endif // !WINE_H_
