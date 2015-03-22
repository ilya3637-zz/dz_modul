#include "House.h"

#include <stdio.h> 
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

House::House(int housenumber, bool newh, bool inr, int count, double rent_){
	number = housenumber;
	newHouse = newh;
	inRepair = inr;
	countOfFlats = count;
	rent = rent_;
}

int House::getNumber(){
	return number;
}

bool House::isNewHouse(){
	return newHouse;
}

bool House::isInRepair(){
	return inRepair;
}

int House::getCountOfFlats(){
	return countOfFlats;
}

double House::getRent(){
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
