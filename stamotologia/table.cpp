#include "table.h"

regist::regist(client Cl, dentist Dn, service Sv, branch Br) {
	Client=Cl;
	Dentist=Dn;
	Service=Sv;
	Branch = Br;
}
regist::regist() {
	client cl;
	dentist dn;
	service sv;
	branch br;
	Client = cl;
	Dentist = dn;
	Service = sv;
	Branch = br;
}
void regist::Input() {
	Client.Input();
	Dentist.Input();
	Service.Input();
	Branch.Input();
}
void regist::Output() {
	Client.Output();
	Dentist.Output();
	Service.Output();
	Branch.Output();
}
regist regist::operator++(int) {
	this->Service++;
	return *this;
}
int* regist::get_serviceprice() {
	return &this->Service.Price;
}
float regist::get_summ_service_price() {
	return (Service.Price * Client.client_counter);
}
