#pragma once
#include "prov.h"

class service 
{
	friend class regist;
protected:
	int ServiceId;
	int Price;
	string Title;
public:
	service(int id, string title, int price);
	service();

	~service();

	void Input();

	void Output();
	service& operator++(int);
	void compare_Service(service& C);
	virtual void Print();
};