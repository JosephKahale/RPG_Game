#ifndef WARRIOR
#define WARRIOR
#include "hp.h"
#include "statblock.h"

class warrior : public hp, public statBlock {
public:
	static const hpType HPGrowth = 19u;
	warrior() : hp(HPGrowth, HPGrowth) {}



private:
};

#endif // !WARRIOR
