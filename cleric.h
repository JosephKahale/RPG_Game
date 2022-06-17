#ifndef CLERIC
#define CLERIC
#include "hp.h"
#include "statblock.h"

class cleric : public hp, public statBlock {
public:
	static const hpType HPGrowth = (hpType)14u;
	static const stattype BaseSTR = (stattype)2u;
	static const stattype baseint = (stattype)3u;

	cleric() : hp(HPGrowth, HPGrowth), statBlock(BaseSTR, baseint) {}

private:
};

#endif // !CLERIC
