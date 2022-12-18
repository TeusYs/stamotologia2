#include <iostream>
#include "prov.h"
#include "table.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    /*service* sv = new service;
    More_info_Service* mrisv = new More_info_Service;
    TempClass<float> kdifficult; //Использование шаблона.
    cout << "Введите время: ";
    mrisv->get_Kdifficult(kdifficult.set());
    cout << "\nИспользование производного класса от класса service. Вывод объектов с помощью виртуальной функции" << endl << "service: ";
    sv->Print();
    cout << endl << "More_info_Service: ";
    sv = mrisv;
    sv->Print();
    cout << endl;

    cout << "\nИспользование аюстрактного класса для вывода классов service и manager:" << endl << "service: ";
    manager* m = new manager;
    human* h;
    service* c = new service;
    h = c;
    h->output();
    cout << "\nmanager: ";
    h = m;
    h->output();
    return 0;*/
    service pr1(13,"Gkj",1111);
    service* prx = &pr1;  // Указатель на базовый класс
    More_info_Service pr2(13,"ss",123,"12","22",1);
    More_info_Service* pry = &pr2;
    prx->Print();
    pry->Print();
    return 0;
}