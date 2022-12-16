#include "client.h"

int client::client_counter = 0;

client::client(int id, string name) {
	clientId = id;
	fio = name;
	client_counter++;
}
client::client() {
	clientId = 0;
	fio = "��� �� �������";
	client_counter++;
}
client::~client() {
}
void client::Input() {
	printf("������� ID �������: ");
	cin >> clientId;
	while (getchar() != '\n');
	printf("������� ��� �������: ");
	getline(cin, fio);
}

void client::Output() {
	printf("\n<ID>\t\t<���>\n");
	cout << clientId<<"\t\t" << fio<<endl;
}
int client::get_count(){
	return client_counter;
}