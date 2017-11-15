#ifndef WINEC_H_  
#define WINEC_H_  

#include <iostream>  
#include <string>  
#include <valarray>  
#include <utility>  

using std::cout;
using std::cin;
using std::string;

class Wine
{
private:
	std::string name;
	std::pair<std::valarray<int>, std::valarray<int>> info;
public:
	Wine() {}
	Wine(const char *l, int y, const int yr[], const int bot[]);
	Wine(const char *l, int y);
	void GetBottles();
	const std::string &Label() const;
	int sum() const;
	void Show() const;
};

#endif  
