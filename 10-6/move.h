#pragma once
#ifndef MOVE_H_
#define MOVE_H

class Move
{
private:
	double x;
	double y;
public:
	Move(double a = 0, double b = 0);//���캯��
	void showmove() const;//��ʾ��ǰx��y��ֵ
	Move add(const Move & m) const;//����һ���������ú�������Move��Ķ��󣬽���һ��const Move���͵ı���
	void reset(double a = 0, double b = 0);
};
#endif