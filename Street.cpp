#include "Street.h"
#include "House.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <string>

using namespace std;



Street::Street(std::string name, bool repair, bool isnew){
	streetName = name;
	inRepair = repair;
	newStreet = isnew;
	countOfHouse = 0;
}


//house addition
void Street::add(House& newHouse){
	street.push_back(newHouse);
	++countOfHouse;
}
//true check
bool Street::has(House& house){
	for (list<House>::iterator it = street.begin(); it != street.end(); ++it) {
		if ((*it).getNumber() == house.getNumber()){
			return true;
		}

	}
	return false;
}
//error
House& Street::getHouse(int number){
	for (list<House>::iterator it = street.begin(); it != street.end(); ++it) {
		if ((*it).getNumber() == number) {
			return (*it);
		}
	}
	cout << "Error: Don't have this House" << endl;
	return *street.end();
}
//delite by number
int Street::del(int number) {
	for (list<House>::iterator it = street.begin(); it != street.end(); ++it) {
		if ((*it).getNumber() == number) {
			street.erase(it);
			--countOfHouse;
			return 1;
		}
	}
	return 0;
}
//delite all
void Street::delAll() {
	street.clear();
	countOfHouse = 0;
}

//print by number
void Street::print(int number){
	for (list<House>::iterator it = street.begin(); it != street.end(); ++it) {
		if ((long)(*it).getNumber() == number) {
			cout << (*it).getNumber() << endl;
		}
	}
}

//print all
void Street::printAll() {

	for (list<House>::iterator it = street.begin(); it != street.end(); ++it) {
		cout << (*it).getNumber() << endl;
	}
}

//rent count
double Street::calcFullRent() {
	double sum;
	for (list<House>::iterator it = street.begin(); it != street.end(); ++it) {
		sum+=(*it).getRent();
	}
	return sum;
}

Street::~Street(){}
