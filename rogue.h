#ifndef ROGUE
#define ROGUE
#include "hp.h"
#include "statblock.h"

class rogue : public hp, public statBlock {
public:
	static const hpType HPGrowth = (hpType)13u;
	static const stattype BaseSTR = (stattype)3u;
	static const stattype baseint = (stattype)2u;

	rogue() : hp(HPGrowth, HPGrowth), statBlock(BaseSTR, baseint) {}

private:
};

#endif // !ROGUE
