#pragma once
#ifndef CD2_H_
#define CD2_H_

const int MAX = 81;

//����
class Cd
{
private:
	char * performers;//�����
	char * label;//��ǩ��ɶ��
	int selections;//һ����Ƭ���м��׸�
	double playtime;//����ʱ��
public:
	Cd(char *s1, char *s2, int n, double x);//���캯��
	Cd(const Cd & d);//���ƹ��캯��
	Cd();
	virtual ~Cd();
	virtual void Report()const;//��ʾCd��������Ϣ
	virtual Cd & operator=(const Cd & d);//��ֵ����
};

class Classic :public Cd
{
private:
	char * main_work;
public:
	Classic(char *s, char *s1, char * s2, int n, double x);
	Classic(char * s, const Cd & c);
	Classic();
	~Classic();
	virtual void Report()const;
};
#endif // !CD_H_

