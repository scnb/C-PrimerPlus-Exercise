#pragma once
#ifndef CD_H_
#define CD_H_

const int MAX = 81;

//基类
class Cd
{
private:
	char performers[50];//演奏家
	char label[20];//标签是啥？
	int selections;//一个唱片里有几首歌
	double playtime;//播放时间
public:
	Cd(char *s1, char *s2, int n, double x);//构造函数
	Cd(const Cd & d);//复制构造函数
	Cd();
	virtual ~Cd();
	virtual void Report()const;//显示Cd的所有信息
	virtual Cd & operator=(const Cd & d);//赋值函数
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
