#ifndef WIZARD
#define WIZARD
#include "hp.h"
#include "statblock.h"

class wizard : public hp, public statBlock {
public:
	static const hpType HPGrowth = (hpType)9u;
	static const stattype BaseSTR = (stattype)1u;
	static const stattype baseint = (stattype)4u;

	wizard() : hp(HPGrowth, HPGrowth), statBlock(BaseSTR, baseint) {}



private:
};

#endif // !WIZARD
