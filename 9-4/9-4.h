#pragma once
namespace SALES
{
	const int QUARTERS = 4;
	struct Sales
	{
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	};
	//�ǽ���ʽ����ԭ��
	void setSales(Sales & s, const double ar[], int n);
	//����ʽ����ԭ��
	void setSales(Sales & s);
	//��ʽ�ṹ
	void showSales(const Sales & s);
}
