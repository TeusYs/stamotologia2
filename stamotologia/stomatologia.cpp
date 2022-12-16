#include <iostream>
#include "prov.h"
#include "table.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    service Service1;
    Service1.Input();
    puts("");
    Service1.Output();
    regist regists[3];
    cout << "\nИнициализация одномерного массива сделок:" << endl;
    for (int i = 0; i < 3; i++) {
        regists[i].Input();
    }
    cout << "\nВывод одномерного массива сделок:" << endl;
    for (int i = 0; i <3; i++) {
        regists[i].Output();
    }
    cout << "\nКопирование одномерного массива во вторую ячейку двумерного массива " << endl;
    for (int i = 0; i < 3; i++)
        regists[1][i] = regists[i];
    cout << "\nВывод двумерного массива : " << endl;
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 3; j++)
            regists[i][j].Output();
    return 0;
}