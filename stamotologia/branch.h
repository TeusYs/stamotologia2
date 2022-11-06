#include "prov.h"
typedef struct {
    int branch_id;
    char* branch_street;
    int branch_house;
} branch;

branch branch_input();
branch branch_init(int, const char*, int);
void branch_output(branch);

