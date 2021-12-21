#include <iostream>
using namespace std;

// инициализация переменных (задание 1)
bool var1 = true;
char var2 = 'M';
short var3 = 10'000; // аналогично short int
unsigned short var4 = 40'000; // аналогично unsigned short int
int var5 = 2'000'000;
unsigned var6 = 4'000'000; // аналогично unsigned int
long var7 = 2'000'000; // аналогично long int
unsigned long var8 = 4'000'000; // аналогично unsigned long int
long long var9 = 1'000'000'000'000;
float var10 = 3.14;
double var11 = 3.1415965;
long double var12 = 3.1415965123409865;

// создание перечисления (задание 2)
enum Game
{
	FIELD_CROSSES = 'X',
	FIELD_ZERO = '0',
	FIELD_EMPTY = '_'
};

// создание массива (задание 3)
Game array[3][3] = { {FIELD_EMPTY, FIELD_EMPTY, FIELD_EMPTY},
					 {FIELD_EMPTY, FIELD_EMPTY, FIELD_EMPTY},
					 {FIELD_EMPTY, FIELD_EMPTY, FIELD_EMPTY} };

int main()
{
	cout << "Program is done" << endl;
	return 0;
}