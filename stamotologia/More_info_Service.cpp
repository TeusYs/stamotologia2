#include "More_info_Service.h"

More_info_Service::More_info_Service(int id, string title, int price, string hour, string minute, float kdifficult){
	ServiceId = id;
	Title = title;
	Price = price;
	Hour = hour;
	Minute = minute;
	Kdifficult=kdifficult
	Time = hour + ":" + minute;
}

More_info_Service::More_info_Service(){
	ServiceId = 0;
	Title = "Название не указано";
	Price = 0;
	Hour = "00";
	Minute = "00";
	Kdifficult = 0;
	Time = "00:00";
}
More_info_Service::~More_info_Service() {

}

string More_info_Service::get_time() {

	return Time;
}

More_info_Service More_info_Service::operator=(const service& objservice) {
	service::operator=(objservice);
	this->Time = "00:00";
	this->Kdifficult = 1;
	return *this;
}

float More_info_Service::get_Kdifficult() {
	return Kdifficult
}

void More_info_Service::Print()
{
	cout << endl << "id услуги : " << product_id;
}

