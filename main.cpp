#include "Vehicle.h"

/* Add a comment */
int main()  
{  
	string id1; 
	int speed1, attack1, defense1, range1; 

	Vehicle v1;  
	v1.print();


	std::cout << endl << endl;
	Vehicle v2;
	std::cout << "\n\nGive a ID, SPEED, ATTACK, DEFENSE and RANGE for vehicle v-2: "; 
	std::cin >> id1 >> speed1 >> attack1 >> defense1 >> range1; 
	v2.setAll(id1, speed1, attack1, defense1, range1); 
	v2.print();

	v1.setSpeed(33);
	std::cout << endl << endl;
	Vehicle v3;
	//Vehicle v3(v1);
	v3 = v1;
	v3.print();

	system("PAUSE"); 
	return 0; 
}