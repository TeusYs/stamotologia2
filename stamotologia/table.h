#include "prov.h"
#include "client.h"
#include "dentist.h"
#include "service.h"
#include "branch.h"

class table
{
private:
	int TableId;
public:

	client Client;
	dentist Dentist;
	service Service;
	branch Branch;

	//table();

	//~table();
};
