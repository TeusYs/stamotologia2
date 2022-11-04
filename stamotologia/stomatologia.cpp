#include <iostream>
#include "prov.h"
#include "table.h"


int main()
{
	int count;
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	client CL(10, "Владимир Иванов");
	CL.OutputClient();
	client CL1;
	cout << endl;
	CL1.InputClient();
	CL1.OutputClient();
	dentist DN(10,5, "Владимир Иванов");
	DN.OutputDentist();
	dentist DN1;
	cout << endl;
	DN1.InputDentist();
	DN1.OutputDentist();
	branch BR(10,"Иванова",5);
	BR.OutputBranch();
	branch BR1;
	cout << endl;
	BR1.InputBranch();
	BR1.OutputBranch();
	cout << "\nВведите размер массива объектов: ";
	cin >> count;
	client* arrDeal = new client[count];
	for (int i = 0; i < count; i++) {
		(arrDeal + i)->InputClient();
		puts("");
		(arrDeal + i)->OutputClient();
		cout << "\n" << endl;
	}
}