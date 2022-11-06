#include "client.h"



client::client(int id, string name) {
	clientId = id;
	fio = name;
}
client::client() {
	clientId = 0;
	fio = "Имя не указано";
}
client::~client() {
}
void client::InputClient() {
	printf("Введите ID клиента: ");
	cin >> clientId;
	while (getchar() != '\n');
	printf("Введите ФИО клиента: ");
	getline(cin, fio);
}

void client::OutputClient() {
	printf("\n<ID>\t\t<ФИО>\n");
	cout << clientId<<"\t\t" << fio<<endl;
}