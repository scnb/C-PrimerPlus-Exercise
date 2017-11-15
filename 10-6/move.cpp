#include "stdafx.h"
#include "move.h"
#include <iostream>


Move::Move(double a, double b)
{
	x = a;
	y = b;
}

void Move::showmove()const
{
	std::cout << "x ��ֵΪ��" << x;
	std::cout << " y ��ֵΪ��" << y << std::endl;
}

Move Move::add(const Move & m)const
{
	Move new_one;
	new_one.x = this->x + m.x;
	new_one.y = this->y + m.y;
	return new_one;
}

void Move::reset(double a, double b)
{
	x = a;
	y = b;
}