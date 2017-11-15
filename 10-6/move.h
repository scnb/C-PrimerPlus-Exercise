#pragma once
#ifndef MOVE_H_
#define MOVE_H

class Move
{
private:
	double x;
	double y;
public:
	Move(double a = 0, double b = 0);//构造函数
	void showmove() const;//显示当前x、y的值
	Move add(const Move & m) const;//定义一个函数，该函数返回Move类的对象，接收一个const Move类型的变量
	void reset(double a = 0, double b = 0);
};
#endif