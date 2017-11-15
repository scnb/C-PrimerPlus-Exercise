#include "winec.h"  
#include "stdafx.h"
#include <valarray>

Wine::Wine(const char * l, int y, const int yr[], const int bot[])
{
	name = l;
	std::valarray<int> a(y);
	std::valarray<int> b(y);
	for (int i = 0; i < y; ++i)
	{
		a[i] = yr[i];
		b[i] = bot[i];
	}
	info = std::make_pair(a, b);
}

Wine::Wine(const char * l, int y)
{
	name = l;
	std::valarray<int> a(y);
	std::valarray<int> b(y);
	info = std::make_pair(a, b);
}

void Wine::GetBottles()
{
	std::valarray<int> a(info.first.size());
	std::valarray<int> b(info.first.size());
	std::cout << "Enter " << name << " for " << info.first.size() << " year(s):" << std::endl;
	for (int i = 0; i < (int)info.first.size(); ++i)
	{
		std::cout << "Enter year: ";
		std::cin >> a[i];

		std::cout << "Enter bottles for that year: ";
		std::cin >> b[i];
	}
	info = std::make_pair(a, b);
}

const std::string & Wine::Label() const
{
	return name;
}

int Wine::sum() const
{
	int ans = 0;
	for (int i = 0; i < (int)info.first.size(); ++i)
		ans += info.second[i];
	return ans;
}

void Wine::Show() const
{
	std::cout << "Wine: " << name << std::endl;
	std::cout << "\t\t" << "Year" << "\t" << "Bottles" << std::endl;
	for (int i = 0; i < (int)info.first.size(); ++i)
		std::cout << "\t\t" << info.first[i] << "\t" << info.second[i] << std::endl;
}