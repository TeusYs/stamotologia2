#pragma once
#include "prov.h"
#include "service.h"
#include "TempClass.h"

class More_info_Service:public service {
protected:
	string Hour;
	string Minute;
	string Time;
	float Kdifficult;
public:
	More_info_Service(int id, string title, int price, string hour, string minute, float kdifficult);
	More_info_Service();
	~More_info_Service();

	string get_time();
	void get_Kdifficult(float Kdifficukt);
	More_info_Service operator=(const service&);

	void Print();
};
