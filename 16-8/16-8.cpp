// 16-8.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::unique;

vector<string> Friend();
void Show_friend(vector<string> mat);

int main()
{
	vector<string> mat_fri;
	vector<string> pat_fri;
	mat_fri = Friend();
	pat_fri = Friend();
	sort(mat_fri.begin(), mat_fri.end());
	sort(pat_fri.begin(), pat_fri.end());
	cout << "Mat's friend: ";
	Show_friend(mat_fri);
	cout << "Pat's friend: ";
	Show_friend(pat_fri);
	int sum = pat_fri.size() + mat_fri.size();
	vector<string> merge_fri(sum);
	merge(mat_fri.begin(), mat_fri.end(), pat_fri.begin(), pat_fri.end(), merge_fri.begin());
	vector<string>::iterator new_end = unique(merge_fri.begin(), merge_fri.end());
	cout << "The merged fiends: ";
	int j = 0;
	vector<string>::iterator i = merge_fri.begin();
	for (;i < new_end;i++,j++)
	{
		cout << merge_fri[j]<<' ';
	}
	getchar();
	getchar();
    return 0;
}

vector<string> Friend()
{
	int i = 0;
	int N;
	string input;
	cout << "Enter number of friend: ";
	cin >> N;
	vector<string> temp(N);									//一定要明确指出vector容器的大小，否则就会出现溢出错误
	for (i = 0;i < N;i++)
	{
		cout << "Enter friends' name：";
		cin >> input;
		temp[i] = input;
	}
	return temp;
}

void Show_friend(vector<string> temp)
{
	for (int i = 0;i < temp.size();i++)
	{
		cout << temp[i] << ' ';
	}
	cout << endl;
}