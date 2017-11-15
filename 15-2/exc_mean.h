#pragma once
#ifndef EXC_MEAN_H_
#define EXC_MEAN_H_

#include <iostream>	
#include <stdexcept>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class bad_hmean : public std::logic_error
{
private:
	double v1;
	double v2;
public:
	bad_hmean(double a = 0, double b = 0,const string & s = "bad_hmean") :v1(a), v2(b),logic_error(s) {}
	void mesg();
};

inline void bad_hmean::mesg()
{
	cout << "hmean(" << v1 << ", " << v2 << "):" << " invalid arguments: a = -b\n";
}

class bad_gmean : public std::logic_error
{
public:
	double v1;
	double v2;
	bad_gmean(double a = 0, double b = 0, const string & s = "bad_gmean") : v1(a), v2(b), logic_error(s) {}
	const char * mesg();
};

inline const char * bad_gmean::mesg()
{
	return "gmean() arguments should be >= 0\n";
}

#endif // !EXC_MEAN_H_
