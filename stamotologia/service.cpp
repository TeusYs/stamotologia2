#include "service.h"

service service_input() {
	service Service{};
	do {
		printf("Введите название услуги: ");
		Service.service_name = get_string();
	} while (Service.service_name[0] == 0);
	printf("Введите id услуги. ");
	Service.service_id = get_int();
	printf("Введите стоимость услуги. ");
	Service.service_price = get_int();
	return Service;
};

service service_init(int id,const char* str, int price) {
	service Service{};
	Service.service_name = strcpy_d(Service.service_name, str);
	Service.service_price = price;
	Service.service_id = id;
	return Service;
};

void service_output(service obj) {
	printf("Название услуги: %s Стоимость: %d руб.\n", obj.service_name, obj.service_price);
};
