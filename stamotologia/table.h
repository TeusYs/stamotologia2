#include "prov.h"
#include "client.h"
#include "dentist.h"
#include "service.h"
#include "branch.h"

typedef struct {
	client Client;
	dentist Dentist;
	service Service;
	branch Branch;
}regist;
regist regist_input();
void  regist_output(int, regist);