#ifndef STATBLOCK
#define STATBLOCK
#include "statTypes.h"

struct statBlock {
	stattype strenght; //OxFF
	stattype intellect; //OxFF
	statBlock() { strenght = (stattype)1u; intellect = (stattype)1u; }
};

#endif // !STATBLOCK
