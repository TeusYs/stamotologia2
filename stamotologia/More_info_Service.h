#pragma once
#include "prov.h"
#include "service.h"
#include "TempClass.h"

class More_info_Service: service {
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
	float get_Kdifficult();
	More_info_Service operator=(const service&);

	void Print();
};
