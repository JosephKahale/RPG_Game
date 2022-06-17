#ifndef STATBLOCK
#define STATBLOCK
#include "statTypes.h"

class statBlock{
private:
	stattype strength; //OxFF
	stattype intellect; //OxFF
public:
	statBlock() { 
		strength = (stattype)1u;
		intellect = (stattype)1u; 
	}

	explicit statBlock(stattype s, stattype i) { 
		strength = s;
		intellect = i; 
	}

	stattype getStrength() {
		return strength;
	}

	stattype getIntellect() {
		return intellect;
	}
};

#endif // !STATBLOCK
