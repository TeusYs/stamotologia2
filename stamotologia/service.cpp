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


void service::InputService() {
	printf("Введите ID Услуги: ");
	cin >> ServiceId;
	while (getchar() != '\n');
	printf("Введите название услуги: ");
	cin >> Title;
	while (getchar() != '\n');
	printf("Введите цену услуги: ");
	cin >> Price;
}

void service::OutputService() {
	printf("<ID>\t\t<Услуга>\t<Цена>\n");
	cout << ServiceId << "\t\t" << Title << "\t\t"<<Price << endl;
}
