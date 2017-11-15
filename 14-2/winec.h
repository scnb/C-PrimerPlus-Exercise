#pragma once
#ifndef WINEC_H_
#define WINEC_H_
#include <valarray>
#include <iostream>
#include <string>
#include <utility>

using std::cin;
using std::cout;
using std::string;
using std::endl;


typedef std::valarray<int> ArrayInt;
typedef std::pair<std::valarray<int>, std::valarray<int>> PairArray;

class Wine : private string ,private PairArray
{
private:
	int year;//能存储几年，是年数
public:
	Wine(const char * l, int y, const int yr[], const int bot[]);
	Wine(const char * l, int y);
	~Wine();
	void GetBottles();
	int sum()const;
	const string & label();
	void Show()const;
};


#endif // !WINE_H_

