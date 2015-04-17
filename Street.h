#pragma once
#include <list>
#include "House.h"


class Street {

	std::list<House> street;
	int countOfHouse;
	std::string streetName;
	bool inRepair;
	bool newStreet;


public: Street(std::string, bool, bool);
		Street(const Street& obj);
		void add(const House&);
		bool has(const House&);
		const House& getHouse(int) const;
		void setHouse(const House&);
		int del(int);
		void delAll();
		void print(int);
		void printAll();
		double calcFullRent();
		Street& operator =(const Street& st);
		~Street();
};
