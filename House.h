#pragma once
class House{
	int number;
	bool newHouse;
	bool inRepair;
	int countOfFlats;
	double rent;

public: House(int, bool, bool, int,double);
		House(const House& obj); 
		bool isNewHouse();
		bool isInRepair();
		double getRent() const;
		int getCountOfFlats() const;
		int getNumber() const;
		void setNumber(int);
		void setInRepair(bool);
		void setNewHouse(bool);
		void setRent(double);
		void setCountOfFlats(int);
		House& operator =(const House& st);
};
