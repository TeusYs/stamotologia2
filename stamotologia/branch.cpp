#include "branch.h"

branch branch_input() {
	branch Branch{};
	do {
		printf("������� ����� �������: ");
		Branch.branch_street= get_string();
	} while (Branch.branch_street[0] == 0);
	printf("������� id �������. ");
	Branch.branch_id = get_int();
	printf("������� ����� ���� ");
	Branch.branch_house = get_int();
	return Branch;
};

branch branch_init(int id, const char* street, int house) {
	branch Branch{};
	Branch.branch_street = strcpy_d(Branch.branch_street, street);
	Branch.branch_id = id;
	Branch.branch_house = house;
	return Branch;
};

void branch_output(branch obj) {
	printf("����� ������� ��. %s ��� %d\n", obj.branch_street, obj.branch_house);
};