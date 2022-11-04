#include "prov.h"

class dentist
{
private:
	int DentistId;
	int exp;
	string fio;
public:
	dentist(int id, int ex, string name);
	dentist();
	~dentist();

	void InputDentist();

	void OutputDentist();
};
