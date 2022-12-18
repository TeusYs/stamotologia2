#include "prov.h"
#include "client.h"
#include "dentist.h"
#include "service.h"
#include "branch.h"
#include "More_info_Service.h"

class regist
{
private:
	client Client;
	dentist Dentist;
	service Service;
	branch Branch;
public:
    regist(client Cl, dentist Dn, service Sv, branch Br);
    regist();
    void Input();
    void Output();
	regist operator++(int);
	int* get_serviceprice();
	float get_summ_service_price();
};
