#include "Street.h"
#include "House.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <string>
#include <list>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::exception;




Street::Street(std::string name, bool repair, bool isnew){
	streetName = name;
	inRepair = repair;
	newStreet = isnew;
	countOfHouse = 0;
}

Street::Street(const Street& obj)
{
	streetName=obj.streetName;
	inRepair=obj.inRepair;
	newStreet=obj.newStreet;
	countOfHouse=obj.countOfHouse;
}


Street& Street::operator =(const Street& st) {
    streetName = st.streetName;
    inRepair = st.inRepair;
    newStreet = st.newStreet;
    countOfHouse = st.countOfHouse;
    street = st.street;
    return *this;
}



//house addition
void Street::add(const House& newHouse){
	street.push_back(newHouse);
	++countOfHouse;
}
//true check
bool Street::has(const House& house){
	for (list<House>::iterator it = street.begin(); it != street.end(); ++it) {
		if ((*it).getNumber() == house.getNumber()){
			return true;
		}

	}
	return false;
}
//error
const House&Street::getHouse(int number) const {
	for (list<House>::const_iterator it = street.begin(); it != street.end(); ++it) {
		if ((*it).getNumber() == number) {
			return (*it);
		}
	}
	cout << "Error: Don't have this House" << endl;
	return *street.end();
}
//пара
void Street::setHouse(const House& x) {
	street.push_back(x);
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
	double sum=0;
	for (list<House>::iterator it = street.begin(); it != street.end(); ++it) {
		sum+=(*it).getRent();
	}
	return sum;
}

Street::~Street(){}
