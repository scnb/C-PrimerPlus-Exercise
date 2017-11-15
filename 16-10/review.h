#pragma once
#ifndef REVIEW_H_
#define REVIEW_H_

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::shared_ptr;


struct Review
{
	string title;
	int rating;
	int price;
};

shared_ptr<Review> FillReview();
void ShowReview(const shared_ptr<Review> & rr);
bool operator<(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2);
bool worseThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2);
bool BetterThan(const shared_ptr<Review> & r1, const shared_ptr<Review> & r2);
void Show_Choice();
void Sort_Increase(vector < shared_ptr<Review>> Books);
void Sort_Decrease(vector<shared_ptr<Review>> Books);
void Sort_Rating_Increase(vector<shared_ptr<Review>> Books);
void Sort_Rating_Decrease(vector<shared_ptr<Review>> Books);

#endif // !REVIEW_H_
