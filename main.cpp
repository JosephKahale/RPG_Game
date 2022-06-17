#include <iostream>
#include "allClasses.h"

int main() {
	warrior warr1;

	wizard wiz1;

	cleric cler1;

	rogue rog1;

	std::cout << warr1.getMaxHP() << warr1.getIntellect();

	return 0;
}