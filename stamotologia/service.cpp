#include "service.h"
service::service(int id, string title, int price) {
	ServiceId = id;
	Title = title;
	Price = price;
}
service::service() {
	ServiceId = 0;
	Title = "Название не указано";
	Price = 0;
}

service::~service() {
}


void service::Input() {
	int price;
	printf("Введите ID Услуги: ");
	cin >> ServiceId;
	while (getchar() != '\n');
	printf("Введите название услуги: ");
	cin >> Title;
	while (getchar() != '\n');
	printf("Введите цену услуги: ");
	cin >> price;
	while (getchar() != '\n');
	try {
		if (price > 1000000 || price < 0) throw price;
		Price = price;
	}
	catch (const int) {
		printf("Неправильно установлена цена товара\n");
	}
}

void service::Output() {
	printf("<ID>\t\t<Услуга>\t<Цена>\n");
	cout << ServiceId << "\t\t" << Title << "\t\t"<<Price << endl;
}
service& service::operator++(int) {
	this->Price += 10000;
	return *this;
}
void service::compare_Service(service& C)
{
	if (this->Price > C.Price) {
		cout << this->Title << "Дороже";
	}
	else if (this->Price < C.Price) {
		cout << this->Title << "Дешевле";
	}
	else {
		cout << "\n Одинаковой стоимости" << endl;
	}
}
void service::Print()
{
	cout << endl << "id услуги" << ServiceId;
}
string service::get_Service_name() {
	return Title;
}
