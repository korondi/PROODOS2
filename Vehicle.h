#ifndef VEHICLE_H
    #define VEHICLE_H
    #include <iostream>  	 
    #include <cstring>
    using namespace std;   


    class Vehicle
    {
        private:
            string id;
            int speed, attack, defense, range;
         

        public:
            Vehicle ();                             //default constructor
			Vehicle (string, int, int, int, int);   //custom constructor
			Vehicle (Vehicle &);                    //copy constructor
            void setId(string);
            void setSpeed(int);
            void setAttack(int);
            void setDefense(int);
            void setRange(int);
            void setAll(string, int, int, int, int);
            string getId() const;
            int getSpeed() const;
            int getAttack() const;
            int getDefense() const;
            int getRange() const;
            void print() const
			;
    };
#endif
