#include "prov.h"

class client
{
	friend class regist;
private:
	int clientId;
	string fio;
	static int client_counter;
public:
	
	client(int id, string name);
	client();
	~client();	

	void InputClient();

	void OutputClient();
	static int get_count();

};