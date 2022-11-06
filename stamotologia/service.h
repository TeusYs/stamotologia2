#include "prov.h"
typedef struct {
    int service_id;
    char* service_name;
    int service_price;
} service;

service service_input();
service service_init(int,const char*, int);
void service_output(service);