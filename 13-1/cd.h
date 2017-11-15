#pragma once
#ifndef CD_H_
#define CD_H_

const int MAX = 81;

//����
class Cd
{
private:
	char performers[50];//�����
	char label[20];//��ǩ��ɶ��
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
	char main_work[MAX];
public:
	Classic(char *s, char *s1, char * s2, int n, double x);
	Classic(char * s, const Cd & c);
	Classic();
	~Classic();
	virtual void Report()const;
};
#endif // !CD_H_
