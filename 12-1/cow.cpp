#include "stdafx.h"
#include "cow.h"
#include <iostream>
#include <cstdlib>

Cow::Cow()
{
	strcpy(name, "C++");
	hobby = new char[4];
	strcpy(hobby, "boy");
	weight = 0;
}

Cow::Cow(const char * nm, const char * ho, double wt)
{
	strcpy(name, nm);
	hobby = new char[strlen(ho) + 1];
	strcpy(hobby, ho);
	weight = wt;
}

Cow::Cow(const Cow & c)
{
	strcpy(name, c.name);
	hobby = new char[(strlen(c.hobby) + 1)];
	strcpy(hobby, c.hobby);
	weight = c.weight;
}

Cow::~Cow()
{
	//delete[] name;
	delete[]hobby;
}

Cow & Cow::operator=(const Cow & c)
{
	strcpy(name, c.name);
	hobby = new char[(strlen(c.hobby) + 1)];
	strcpy(hobby, c.hobby);
	weight = c.weight;
	return *this;
}

void Cow::ShowCow()const
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Hobby: " << hobby << std::endl;
	std::cout << "Weight: " << weight << std::endl;
}