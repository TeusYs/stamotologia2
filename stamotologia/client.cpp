#include "client.h"

client client_input() {
	client Client;
	do {
		printf("������� ��� �������: ");
		InputString(Client.client_FIO);
	} while (Client.client_FIO[0] == 0);
	printf("������� id �������. ");
	InputInt(&Client.client_id);
	return Client;
};

client client_init(int id, const char* FIO) {
	client Client{};
	Client.client_FIO = strcpy_d(Client.client_FIO, FIO);
	Client.client_id = id;
	return Client;
};

void client_output(client obj) {
	printf("��� �������: %s\n", obj.client_FIO);
};