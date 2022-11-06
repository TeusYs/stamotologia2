#include <iostream>
#include "table.h"


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    printf("Введите количество сделок. ");
    int count;
    while ((count = get_int()) < 1);
    regist* regists = (regist*)malloc(count * sizeof(regist));
    puts("Введите данные.");
    for (int i = 0; i < count; i++) {
        printf("Сделка номер %d:\n", i + 1);
        regists[i] = regist_input();
        puts("");
    }
    printf("\nВывод всех сделок regists\n");
    for (int i = 0; i < count; i++) {
        printf("Сделка номер %d:\n", i + 1);
        regist_output(i + 1, regists[i]);
        puts("");
    }

    puts("\n");
    puts("Инициализация поля Service объекта regists и вывод в консоль.");
    puts("До инициализации.");
    service_output(regists[0].Service);
    regists[0].Service = service_init(10,"Удаление зуба", 5000);
    puts("\nПосле инициализации.");
    service_output(regists[0].Service);
    system("pause");
    return 0;
}