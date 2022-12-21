#include <iostream>
#include "prov.h"
#include "table.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    service service1(11,"22",3222);
    More_info_Service service2(1,"Лалка",5500,"12","30",5);
    vector<string> Service_Title;
    Service_Title.insert(Service_Title.begin(), service1.get_Service_name());
    Service_Title.push_back(service2.get_Service_name());


    ////////////////// ПОИСК В КОНТЕЙНЕРЕ VECTOR
    for (string title : Service_Title) {
        if (title == "Лалка") {
            cout << "\nНайдено!\n" << endl;
        }
    }

    ///////////////// СОРТИРОВКА КОНТЕЙНЕРА VECTOR МЕТОДОМ ПУЗЫРЬКА
    for (string title : Service_Title) {
        int i = 0;
        string help;
        if (Service_Title[i] > Service_Title[i + 1]) {
            help = Service_Title[i];
            Service_Title[i] = Service_Title[i + 1];
            Service_Title[i + 1] = help;
        }
        i++;
    }
    /////////////////// ВЫВОД КОНТЕЙНЕРА
    for (string title : Service_Title) {
        cout << title << endl;
    }

    ////////////////// ПОИСК В КОНТЕЙНЕРЕ SET ЧЕРЕЗ FIND
    set<string> Service_Title_set;
    Service_Title_set.insert(Service_Title_set.begin(), service1.get_Service_name());
    Service_Title_set.insert(Service_Title_set.end(), service2.get_Service_name());
    set<string>::iterator it = Service_Title_set.find("22");
    cout <<"\n" << *it;
}