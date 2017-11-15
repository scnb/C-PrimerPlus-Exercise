#pragma once
#ifndef PLORG_H_
#define PLORG_H_

const int MAX = 19;

class Plorg
{
private:
	char name[MAX];
	int CI;
public:
	Plorg();
	void change_CI(int val);
	void showplorg();
};
#endif