#include "service.h"
service::service(int id, string title, int price) {
	ServiceId = id;
	Title = title;
	Price = price;
}
service::service() {
	ServiceId = 0;
	Title = "�������� �� �������";
	Price = 0;
}

service::~service() {
}


void service::InputService() {
	printf("������� ID ������: ");
	cin >> ServiceId;
	while (getchar() != '\n');
	printf("������� �������� ������: ");
	cin >> Title;
	while (getchar() != '\n');
	printf("������� ���� ������: ");
	cin >> Price;
}

void service::OutputService() {
	printf("<ID>\t\t<������>\t<����>\n");
	cout << ServiceId << "\t\t" << Title << "\t\t"<<Price << endl;
}
service& service::operator++(int) {
	this->Price += 10000;
	return *this;
}
void service::compare_Service(service& C) {
	if (this->Price > C.Price) {
		cout << this->Title << "������";
	}
	else if (this->Price < C.Price) {
		cout << this->Title << "�������";
	}
	else {
		cout << "\n ���������� ���������" << endl;
	}
}
