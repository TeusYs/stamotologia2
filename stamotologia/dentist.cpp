#include "dentist.h"
dentist::dentist(int id, int ex, string name) {
	DentistId=id;
	exp=ex;
	fio=name;
}

dentist::dentist() {
	fio = "Имя не указано";
	DentistId = 0;
	exp = 0;
}

dentist::~dentist() {
}
void dentist::InputDentist() {
	printf("Введите ID массажиста: ");
	cin >> DentistId;
	while (getchar() != '\n');
	printf("Введите стаж массажиста: ");
	cin >> exp;
	while (getchar() != '\n');
	printf("Введите ФИО массажиста: ");
	getline(cin, fio);
}

void dentist::OutputDentist() {
	printf("\n<ID>\t\t<ФИО>\t\t<Стаж>\n");
	cout<<DentistId<<"\t\t" << fio << "\t\t" << exp << endl;
}
