#include "House.h"

#include <stdio.h> 
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int House::getNumber(){
	return number;
}

double House::getRent(){
	return rent;
}

int House::getCountOfFlats(){
	return countOfFlats;
}

bool House::isNewHouse(){
	return newHouse;
}

bool House::isInRepair(){
	return inRepair;
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
