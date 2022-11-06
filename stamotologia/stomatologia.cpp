#include <iostream>
#include "prov.h"
#include "table.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int count;
    regist regist1, * regists[3];
    dentist Dentist(1,12,"Иванов А.А.");
    branch Branch(4, "Ленина",46 );
    client Client(12, "Зайцев А.Д.");
    service Service(12,"Пломба", 2000);
    regist regist3(Client, Dentist, Service,Branch );

    cout << "Вывод сделок, созданных конструкторами:\n" << endl;
    regist1.regist_output();
    cout << endl;
    regist3.regist_output();
    cout << endl;
    cout << "\nВведите размер массива объектов: ";
    cin >> count;
    regist* arrRegist = new regist[count]; //динамический массив объектов класса regist.
    for (int i = 0; i < count; i++) {
        (arrRegist + i)->regist_input();
        puts("");
        (arrRegist + i)->regist_output();
        cout << "\n" << endl;
    }
    delete[] arrRegist;
    regist* Regist = new regist;
    *Regist = regist1;
    cout << "\nСделка 1:" << endl;
    regist1.regist_output();
    cout << endl;
    cout << "\nКопия сделки 1 с помощью new:" << endl;
    (*Regist).regist_output();
    cout << endl;
    cout << endl;
    delete Regist;

    regists[0] = &regist1;
    regists[1] = &regist3;
    for (int i = 0; i < 2; i++) {
        regists[i]->regist_output();
        cout << endl;
    }
    return 0;
}