#include "table.h"

regist regist_input() {
	regist Regist;
	Regist.Client = client_input();
	Regist.Dentist = dentist_input();
	Regist.Service = service_input();
	Regist.Branch = branch_input();
	return Regist;
}

void regist_output(int num, regist tab) {
	printf("Детали записи %3d.\n", num);
	dentist_output(tab.Dentist);
	client_output(tab.Client);
	service_output(tab.Service);
	branch_output(tab.Branch);
	puts("");
}