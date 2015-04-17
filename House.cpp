#include "House.h"

#include <stdio.h> 
#include <iostream>
#include <string>
#include <sstream>
#include <list>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::exception;

House::House(int housenumber, bool newh, bool inr, int count, double rent_){
	number = housenumber;
	newHouse = newh;
	inRepair = inr;
	countOfFlats = count;
	rent = rent_;
}
 
House::House(const House& obj) {
	number=obj.number;
	newHouse=obj.newHouse;
	inRepair=obj.inRepair;
	countOfFlats=obj.countOfFlats;
	rent=obj.rent;
}



House& House::operator =(const House& st) {
    number = st.number;
    newHouse = st.newHouse;
    inRepair = st.inRepair;
    countOfFlats = st.countOfFlats;
    rent = st.rent;
    return *this;
}


int House::getNumber() const {
	return number;
}

void House::setNumber(int xn) {	
number =xn;
}

bool House::isNewHouse(){ 
	return newHouse;
}

bool House::isInRepair(){
	return inRepair;
}

int House::getCountOfFlats() const {
	return countOfFlats;
}

double House::getRent() const {
	return rent;
}


void House::setInRepair(bool newinRepair){
	inRepair = newinRepair;
}

void House::setNewHouse(bool newnewHouse){
	newHouse = newnewHouse;
}

void House::setRent(double newRent){
	rent = newRent;
}

void House::setCountOfFlats(int newCount){
	countOfFlats = newCount;
}
