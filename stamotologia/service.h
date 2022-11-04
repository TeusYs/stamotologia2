#include "prov.h"

class service
{
private:
	int ServiceId;
	int Price;
	string Title;
public:
	service(int id, string title, int price);
	service();

	~service();

	void InputService();

	void OutputService();
};