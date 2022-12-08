#include <iostream>
#include "prov.h"
#include "table.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    service Service1, Service2;
    Service1.OutputService();
    puts("");
    Service2.OutputService();
    Service2++;
    puts("");
    Service2.OutputService();
    puts("");
    Service1.compare_Service(Service2);
    puts("");
    puts("");
    regist Registss[4];
    for (int i = 0; i < 4; i++) {
        printf("Regists[%d] = %d\n", i, *(Registss[i].get_serviceprice()));
        if (i < 3) for (int j = 0; j < i + 1; j++) Registss[i + 1]++;
    }
    return 0;
}