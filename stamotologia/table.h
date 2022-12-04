#include "prov.h"
#include "client.h"
#include "dentist.h"
#include "service.h"
#include "branch.h"

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
    void regist_input();
    void regist_output();
	int* get_serviceprice();
	float get_summ_service_price();
};
