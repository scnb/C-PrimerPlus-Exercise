// 9-1.cpp : �������̨Ӧ�ó������ڵ㡣
//���ļ�����

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include "9-1.h"
golf person[3];
int main()
{
	using namespace std;
	int i;
	
	golf test;
	setgolf(test, "shangchao", 20);
	showgolf(test);
	for (i = 0;i < 3;i++)
	{
		setgolf(person[i]);
		if (!strcmp(person[i].fullname, "\0"))  //��֪��Ϊʲôperson[i].fullname=="\0"����//person[i].fullname[i]==0��'\0'����
		{										//��Ϊ�ַ����鲻��ֱ�����ַ������бȽϣ�����string�������
			person[i].handicap = 0;
			break;
		}
	}
	for (i = 0;i < 3;i++)
	{
		showgolf(person[i]);
	}
	getchar();
    return 0;
}

