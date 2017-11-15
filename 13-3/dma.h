#pragma once
#ifndef DMA_H_
#define DMA_H_

#include <iostream>

const int KIND = 7;
const int MAX = 10;

class ABCDMA
{
private:
	char kind[KIND];
	char * label;
	int rating;
public:
	ABCDMA();
	ABCDMA(const char * k,const char *l,const int r);
	ABCDMA(const ABCDMA & a);
	virtual ~ABCDMA();
	virtual void View()const;
};

class baseDMA : public ABCDMA
{
public:
	baseDMA(const char * k="base",const char *l = "null", int r = 0);
	baseDMA(const baseDMA & rs);
	virtual ~baseDMA();
	virtual void View()const;
	baseDMA & operator=(const baseDMA & rs);
};

class lacksDMA : public ABCDMA
{
private:
	enum { COL_LEN = 40 };
	char color[COL_LEN];
public:
	lacksDMA(const char * c = "black", const char * k = "lacks",const char * l = "null", int r = 0);
	lacksDMA(const char * c, const ABCDMA & rs);
	virtual void View()const;
};

class hasDMA : public ABCDMA
{
private:
	char * style;
public:
	hasDMA(const char *s = "none", const char * k = "has",const char *l = "null", int r = 0);
	hasDMA(const char * s, const ABCDMA & rs);
	hasDMA(const hasDMA & rs);//复制构造函数
	virtual ~hasDMA();
	virtual void View()const;
	hasDMA & operator=(const hasDMA & rs);
};

#endif // !DMA_H_