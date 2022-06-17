#include "hitpointtypes.h"

#ifndef HP
#define HP

class hp {
public:
	// returns true if set successfully
	bool setMaxHP(hpType new_max_hp) {
		if (new_max_hp < 1) {
			return false;
		}
		MaxHP = new_max_hp;

		if (CurrentHP > MaxHP) {
			CurrentHP = MaxHP;
		}

		return true;
	}

	void takeDamage(hpType damage) {
		if (damage > CurrentHP) {
			CurrentHP = 0;
			return;
		}

		CurrentHP -= damage;
	}

	void heal(hpType amount) {
		if (amount + CurrentHP > MaxHP) {
			CurrentHP = MaxHP;
			return;
		}

		CurrentHP += amount;
	}

	hpType getCurrentHP() {
		return CurrentHP;
	}

	hpType getMaxHP() {
		return MaxHP;
	}

	hp() {
		CurrentHP = 1;
		MaxHP = 1;
	}

	hp(hpType cHP, hpType mHP) {
		CurrentHP = cHP;
		MaxHP = mHP;
		if (CurrentHP > MaxHP) {
			CurrentHP = MaxHP;
		}
	}

private:
	hpType CurrentHP;
	hpType MaxHP;
};

#endif // !HP