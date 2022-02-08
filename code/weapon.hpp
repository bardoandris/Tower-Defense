#include <string.h>
#include <string>
#include <utility>
class Weapon{
	int BaseDMG, Accuracy, Variance;
	std::string Name;
	std::pair<int, int> Falloff;
	public:
	Weapon(int base_dmg = 100, int acc = 0, int var = 0,
	std::pair<int, int> falloff = std::pair<int, int>(1,1), std::string name = "Undefined"){};
	bool IsMelee;
	friend bool operator== (const Weapon left, const Weapon right){
		return left.Name == right.Name;
	}
	
};
