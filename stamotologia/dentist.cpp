#include "dentist.h"

dentist dentist_input() {
	dentist Dentist{};
	do {
		printf("������� ��� ��������: ");
		Dentist.dentist_FIO = get_string();
	} while (Dentist.dentist_FIO[0] == 0);
	printf("������� id ��������. ");
	Dentist.dentist_id=get_int();
	printf("������� ���� ��������. ");
	Dentist.dentist_exp = get_int();
	return Dentist;
};

dentist dentist_init(int id, const char* FIO,int exp) {
	dentist Dentist{};
	Dentist.dentist_FIO = strcpy_d(Dentist.dentist_FIO, FIO);
	Dentist.dentist_id = id;
	Dentist.dentist_exp = exp;
	return Dentist;
};

void dentist_output(dentist obj) {
	printf("��� ��������: %s c��� ������: %d\n", obj.dentist_FIO, obj.dentist_exp);
};
