#define _CRT_SECURE_NO_WARNINGS
#define STR_BAN "\\0123456789~`!@#$%^&*()_+=-�;:?/|[]{}<>''.,\""
#define STR "0123456789"
#define STR_INT " ~`!@#$%^&*,.()\\\"_-+=�;:?/|[]{}<>'�������������������������������������Ũ��������������������������qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM\n"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <Windows.h>
#include <conio.h>
#include <time.h> 
#include <clocale>
#include <stdint.h>
#include <stdbool.h>
using namespace std;

int get_int(void);
char* get_string(void); //������� ���� ������ ������������ ����� (������� 8 ������).
char* strcpy_d(char*, const char*);
float get_float(void);