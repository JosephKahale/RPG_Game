#ifndef WARRIOR
#define WARRIOR
#include "hp.h"
#include "statblock.h"

class warrior : public hp, public statBlock {
public:
	static const hpType HPGrowth = (hpType)19u;
	static const stattype BaseSTR = (stattype)4u;
	static const stattype baseint = (stattype)1u;

	warrior() : hp(HPGrowth, HPGrowth), statBlock(BaseSTR, baseint) {}



private:
};

#endif // !WARRIOR
