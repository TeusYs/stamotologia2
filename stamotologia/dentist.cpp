#include "dentist.h"
dentist::dentist(int id, int ex, string name) {
	DentistId=id;
	exp=ex;
	fio=name;
}

dentist::dentist() {
	fio = "��� �� �������";
	DentistId = 0;
	exp = 0;
}

dentist::~dentist() {
}
void dentist::InputDentist() {
	printf("������� ID ����������: ");
	cin >> DentistId;
	while (getchar() != '\n');
	printf("������� ���� ����������: ");
	cin >> exp;
	while (getchar() != '\n');
	printf("������� ��� ����������: ");
	getline(cin, fio);
}

void dentist::OutputDentist() {
	printf("\n<ID>\t\t<���>\t\t<����>\n");
	cout<<DentistId<<"\t\t" << fio << "\t\t" << exp << endl;
}
