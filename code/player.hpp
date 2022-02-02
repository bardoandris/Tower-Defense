class Entity{
private:
	int health, speed;
public:
	virtual int Move(int dir);
	virtual int TakeDamage(int amount) = 0;
	
};


class Player;
class Zombie;