#include "client.h"



client::client(int id, string name) {
	clientId = id;
	fio = name;
}
client::client() {
}
client::~client() {
}
void client::InputClient() {
	printf("������� ID �������: ");
	cin >> clientId;
	while (getchar() != '\n');
	printf("������� ��� �������: ");
	getline(cin, fio);
}

void client::OutputClient() {
	printf("\n<ID>\t\t<���>\n");
	cout << fio;
}