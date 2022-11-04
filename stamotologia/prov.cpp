#include "prov.h"

bool SavedString(char* p)
{
	int f = 0;
	if (strpbrk(p, STR_BAN) != NULL)
		f = 1;
	if (p[0] == ' ')
		f = 1;
	if (f == 1)
		return false;
	else
		return true;
}

void InputString(char* p)
{
	int f;
	do {
		f = 0;
		fgets(p, 100, stdin);
		if (p[0] == '\n')
			f = 1;
		if (f == 0)
		{
			p[strlen(p) - 1] = '\0';
			if (!SavedString(p))
				f = 1;
		}
		if (f == 1)
		{
			printf("Неверный ввод!\n");
			printf("Повторите ввод: ");
		}
	} while (f == 1);
}

bool SaveInt(char* p)
{
	int f = 0;
	if (strpbrk(p, STR_INT) != NULL)
		f = 1;
	if (strpbrk(p, STR) == NULL)
		f = 1;
	if (f == 1)
		return false;
	else
		return true;
}

void InputInt(int* k)
{
	int f;
	char p[10];
	do {
		f = 0;
		scanf("%s", p);
		if (!SaveInt(p))
		{
			while (getchar() != '\n');
			f = 1;
			printf("Неверный ввод!\n");
			printf("Повторите ввод: ");
		}
		else
		{
			*k = atoi(p);
			while (getchar() != '\n');
		}
	} while (f);
}
char* strcpy_d(char* str_p, const char* str_c) 
{
	int len_p, len_c;
	if (str_p == NULL) {
		str_p = (char*)malloc(sizeof(char));
		str_p[0] = '\0';
	}
	len_p = strlen(str_p);
	len_c = strlen(str_c);
	if (len_p >= len_c)
		strcpy(str_p, str_c);
	else {
		if ((len_c % 8) != 0) {
			len_c = len_c / 8;
			len_c++;
			str_p = (char*)realloc(str_p, len_c * sizeof(char));
			strcpy(str_p, str_c);
		}
	}
	return str_p;
}