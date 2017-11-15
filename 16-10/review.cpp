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
	cout << "a." << " 按价格升序显示 "<<"\t\t"<< "b." << " 按价格降序显示 "<<endl;
	cout << "c." << " 按评价升序显示 "<<"\t\t"<< "d." << " 按评价降序显示 "<<endl;
	cout << "q." << " 退出 "<<endl;
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
	//读取换行符
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


bool operator<(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2)		//按价格排序
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

bool worseThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2)	//按评级排序
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

bool BetterThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2)	//按评级排序
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

void Sort_Increase(vector < shared_ptr<Review>> Books)			/*按价格升序排序*/
{
	sort(Books.begin(), Books.end());
	cout << "Sorte by price:\nRating\tBook\n";
	for_each(Books.begin(), Books.end(), ShowReview);
}

void Sort_Decrease(vector<shared_ptr<Review>> Books)			//按价格降序排序
{
	sort(Books.begin(), Books.end());
	reverse(Books.begin(), Books.end());
	cout << "Sorted by price:\nRating\tBook\n";
	for_each(Books.begin(), Books.end(), ShowReview);
}

void Sort_Rating_Increase(vector<shared_ptr<Review>> Books)		/*按评级升序排序*/
{
	sort(Books.begin(), Books.end(), worseThan);
	cout << "Sorted by rating:\nRating\tBook\n";
	for_each(Books.begin(), Books.end(), ShowReview);
}

void Sort_Rating_Decrease(vector<shared_ptr<Review>> Books)		//按评级降序排序
{
	sort(Books.begin(), Books.end(), BetterThan);
	cout << "Sorted by rating:\nRating\tBook\n";
	for_each(Books.begin(), Books.end(), ShowReview);
}