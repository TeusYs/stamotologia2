#include "branch.h"


branch::branch(int id, string street, int house) {
	BranchId = id;
	Street = street;
	House = house;
}
branch::branch() {
	BranchId = 0;
	Street = "”лица не указана";
	House = 0;
}

branch::~branch() {
}

void branch::InputBranch() {
	printf("¬ведите ID ‘илиала: ");
	cin >> BranchId;
	while (getchar() != '\n');
	printf("¬ведите улицу: ");
	cin >> Street;
	while (getchar() != '\n');
	printf("¬ведите номер дома: ");
	cin >> House;

}

void branch::OutputBranch() {
	printf("<ID>\t\t<јдрес>\n");
	cout << BranchId << "\t\t" << Street << House << endl;
}