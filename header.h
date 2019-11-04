#include <iostream>

using namespace std;

#ifndef ENUM
#define ENUM
enum modol {
	silnik = 0,
	sprzeglo = 1,
	hamulec = 2,
	opony = 3,
	olej = 4
};

void nazwa_modulu(int);

#endif // !ENUM