#pragma once
#ifndef GOLF_H_
#define GOLF_H_

const int LEN = 40;

class Golf
{
private:
	char name[LEN];
	int handicap;
public:
	Golf(const char * str, int hc);
	Golf();
	void reset_handicap(int hc);
	void showgolf();
};
#endif // !GOLF_H_
