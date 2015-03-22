
#include <list>
#include "House.h"


class Street {

	std::list<House> street;
	int countOfHouse;
	std::string streetName;
	bool inRepair;
	bool newStreet;


public: Street(std::string, bool, bool);;
		void add(House&);
		bool has(House&);
		House& getHouse(int);
		int del(int);
		void delAll();
		void print(int);
		void printAll();
		double calcFullRent();
		~Street();
};
