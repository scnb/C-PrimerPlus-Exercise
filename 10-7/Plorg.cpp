
#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include "Plorg.h"

Plorg::Plorg()
{
	strcpy_s(name, "Plorga");
	CI = 50;
}

void Plorg::showplorg()
{
	std::cout << "Name = " << name;
	std::cout << " CI = " << CI << std::endl;
}

void Plorg::change_CI(int val)
{
	CI = val;
}
