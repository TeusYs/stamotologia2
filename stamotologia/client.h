#include "prov.h"

class client
{
private:
	int clientId;
	string fio;
public:
	
	client(int id, string name);
	client();
	~client();	

	void InputClient();

	void OutputClient();

};