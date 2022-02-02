#include "player.hpp"
#include "weapon.hpp"
#include <iterator>
#include <vector>
#include <algorithm>
class Player: Entity{
public:
	int Move(int dir) override;
	void SetControl();
	void InitControls();
	Player(std::vector<Weapon> WeaponList);
	Player();
	Player(Weapon wep);
	void AddWeapon(Weapon wep){
		std::vector<Weapon>::iterator iter = std::find(WeaponList.begin(), WeaponList.end(), wep);
		if(iter== WeaponList.cend()){
			WeaponList.insert(WeaponList.begin(), wep);
		}
		WeaponList.insert(WeaponList.end(),wep);
	}
	void AddWeapon(std::vector<Weapon> weps){
		WeaponList.insert(WeaponList.begin(), weps.begin(), weps.end());
	}
	
private:

	std::vector<Weapon> WeaponList;
};