#pragma once
#ifndef QUEUE_H_
#define QUEUE_H_

class Customer
{
private:
	long arrive;
	int processtime;
public:
	Customer() { arrive = processtime = 0; }
	void set(long when);
	long when() const { return arrive; }
	int ptime() const { return processtime; }
};

void Customer::set(long when)
{
	processtime = std::rand() % 3 + 1;//等待时间
	arrive = when;//到达时间
}



typedef Customer Item;

#endif // !QUEUE_H_
