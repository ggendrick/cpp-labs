#include <iostream>
#include <string>
using namespace std;



class hero {
public:
	static int count;
	int hp;
	double armor;
	int mp;
	double damage;
	double spelldamage;

private:
	int strength;
	int agility;
	int intelligence;

public:
	hero() {
		strength = 10;
		agility = 10;
		intelligence = 10;
		hp = 10 * strength;
		armor = 0.1 * agility;
		mp = 5 * intelligence;
		damage = 1.5 * strength + 0.5 * agility;
		spelldamage = 1.5 * intelligence;
		count++;
	}
	hero(int strength, int agility, int intelligence)
	{
		this->strength = strength;
		this->agility = agility;
		this->intelligence = intelligence;
		this->hp = 10 * strength;
		this->armor = 0.1 * agility;
		this->mp = 5 * intelligence;
		this->damage = 1.5 * strength + 0.5 * agility;
		this->spelldamage = 1.5 * intelligence;
		count++;
	}

	void setstat(int strength, int agility, int intelligence)
	{
		this->strength = strength;
		this->agility = agility;
		this->intelligence = intelligence;
		this->hp = 10 * strength;
		this->armor = 0.1 * agility;
		this->mp = 5 * intelligence;
		this->damage = 1.5 * strength + 0.5 * agility;
		this->spelldamage = 1.5 * intelligence;
	}
	void getstat()
	{
		cout << "сила: " << strength << endl;
		cout << "ловкость: " << agility << endl;
		cout << "интеллект: " << intelligence << endl;
		cout << "Очки здоровья: " << hp << endl;
		cout << "броня: " << armor << endl;
		cout << "очки маны: " << mp << endl;
		cout << "урон способностями: " << spelldamage << endl;
		cout << "количество героев " << count << endl;
	}
	~hero() {}

};





int hero::count = 0;
int main()
{

	setlocale(LC_ALL, "Ru");
	hero lifestealer(20, 20, 20);


	lifestealer.getstat();

}
