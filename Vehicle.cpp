#include "Vehicle.h"

Vehicle::Vehicle() //default constructor
{
	cout<<"Default initial values: \n";
	setAll("Light", 30, 1, 1, 1 );
}

Vehicle::Vehicle(string id, int speed, int attack, int defense, int range) //custom constructor
{
	cout<<"Custom Initial values: \n";
	setAll(id, speed, attack, defense, range);
}

Vehicle::Vehicle (Vehicle &old_vehicle) //copy constructor
{
	cout<<"Copied initial values: \n";
	setAll(old_vehicle.id, old_vehicle.speed, old_vehicle.attack, old_vehicle.defense, old_vehicle.range);
}

void Vehicle::setId(string id)
{
	if  ((id != "Recon") && (id != "Light") && (id != "Medium") && (id != "Heavy"))
		 this->id = "\0";
	else this->id = id;
    /*
	if  ( (strcmp(id,'Recon')  != 0) && (strcmp(id,"Light") != 0) &&
          (strcmp(id,"Medium") != 0) && (strcmp(id,"Heavy") != 0))
         this->id = "\0";
    else this->id = id;
    */
}

void Vehicle::setSpeed(int speed)
{
    if (!(speed >= 30 && speed <=100))
         this->speed = 30;
    else this->speed = speed;
}

void Vehicle::setAttack(int attack)
{
    if (!(attack >= 1 && attack <=10))
         this->attack = 1;
    else this->attack = attack;
}

void Vehicle::setDefense(int defense)
{
    if (!(defense >= 1 && defense <=20))
         this->defense = 20;
    else this->defense = defense;
}

void Vehicle::setRange(int range)
{
    if (!(range >= 1 && range <=6))
         this->range = 1;
    else this->range = range;
}

void Vehicle::setAll(string id, int speed, int attack, int defense, int range)
{
   	setId(id);
	setSpeed(speed);
	setAttack(attack);
	setDefense(defense);
	setRange(range);
}



string Vehicle::getId(void) const
{
	return id;
}

int Vehicle::getSpeed(void) const
{
	return speed;
}

int Vehicle::getAttack(void) const
{
	return attack;
}

int Vehicle::getDefense(void) const
{
	return defense;
}

int Vehicle::getRange(void) const
{
	return range;
}

void Vehicle::print(void) const
{
	std::cout<<"ID      = <"<<getId()<<">"<<endl;
	std::cout<<"SPEED   = <"<<getSpeed()<<">"<<endl;
	std::cout<<"ATTACK  = <"<<getAttack()<<">"<<endl;		
	std::cout<<"DEFENSE = <"<<getDefense()<<">"<<endl;		
	std::cout<<"RANGE   = <"<<getRange()<<">"<<endl;
}
