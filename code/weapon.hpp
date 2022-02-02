#include <string.h>
#include <string>
#include <utility>
#include <tuple>
class Weapon{
	int BaseDMG, Accuracy, Variance;
	std::string Name;
	std::pair<int, int> Falloff;
	public:
	Weapon(int base_dmg = 100, int acc = 0, int var = 0,
	std::pair<int, int> falloff = std::pair<int, int>(1,1), std::string name = "Undefined"){};

	friend bool operator== (const Weapon left, const Weapon right){
		return std::tie(left.Accuracy, left.BaseDMG, left.Falloff, left.Name, left.Variance)==
		std::tie(right.Accuracy, right.BaseDMG, right.Falloff, right.Name, right.Variance);
	}
};
