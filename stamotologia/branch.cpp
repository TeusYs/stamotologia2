#include "branch.h"


branch::branch(int id, string street, int house) {
	BranchId = id;
	Street = street;
	House = house;
}
branch::branch() {
	BranchId = 0;
	Street = "����� �� �������";
	House = 0;
}

branch::~branch() {
}

void branch::InputBranch() {
	printf("������� ID �������: ");
	cin >> BranchId;
	while (getchar() != '\n');
	printf("������� �����: ");
	cin >> Street;
	while (getchar() != '\n');
	printf("������� ����� ����: ");
	cin >> House;

}

void branch::OutputBranch() {
	printf("<ID>\t\t<�����>\n");
	cout << BranchId << "\t\t" << Street << House << endl;
}