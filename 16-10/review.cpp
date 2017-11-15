#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>
#include "review.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::shared_ptr;


void Show_Choice()
{
	cout << "a." << " ���۸�������ʾ "<<"\t\t"<< "b." << " ���۸�����ʾ "<<endl;
	cout << "c." << " ������������ʾ "<<"\t\t"<< "d." << " �����۽�����ʾ "<<endl;
	cout << "q." << " �˳� "<<endl;
}


shared_ptr<Review> FillReview()
{
	shared_ptr<Review> rr(new Review);
	cout << "Enter book title: ";
	cin >> rr->title;
	cout << "Enter the price of bool: ";
	cin >> rr->price;
	cout << "Enter book rating: ";
	cin >> rr->rating;
	//��ȡ���з�
	while (cin.get() != '\n')
	{
		continue;
	}
	return rr;
}

void ShowReview(const shared_ptr<Review> & rr)
{
	cout << rr->rating << "\t" << rr->title << endl;
}


bool operator<(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2)		//���۸�����
{
	if (r1->price < r2->price)
	{
		return true;
	}
	else if (r1->price == r2->price && r1->rating < r2->rating)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool worseThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2)	//����������
{
	if (r1->rating < r2->rating)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool BetterThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2)	//����������
{
	if (r1->rating > r2->rating)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Sort_Increase(vector < shared_ptr<Review>> Books)			/*���۸���������*/
{
	sort(Books.begin(), Books.end());
	cout << "Sorte by price:\nRating\tBook\n";
	for_each(Books.begin(), Books.end(), ShowReview);
}

void Sort_Decrease(vector<shared_ptr<Review>> Books)			//���۸�������
{
	sort(Books.begin(), Books.end());
	reverse(Books.begin(), Books.end());
	cout << "Sorted by price:\nRating\tBook\n";
	for_each(Books.begin(), Books.end(), ShowReview);
}

void Sort_Rating_Increase(vector<shared_ptr<Review>> Books)		/*��������������*/
{
	sort(Books.begin(), Books.end(), worseThan);
	cout << "Sorted by rating:\nRating\tBook\n";
	for_each(Books.begin(), Books.end(), ShowReview);
}

void Sort_Rating_Decrease(vector<shared_ptr<Review>> Books)		//��������������
{
	sort(Books.begin(), Books.end(), BetterThan);
	cout << "Sorted by rating:\nRating\tBook\n";
	for_each(Books.begin(), Books.end(), ShowReview);
}