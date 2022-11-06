#include "prov.h"
typedef struct {
    int dentist_id;
    char* dentist_FIO;
    int dentist_exp;
} dentist;

dentist dentist_input();
dentist dentist_init(int, const char*, int);
void dentist_output(dentist);
