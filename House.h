
class House{
	int number;
	bool newHouse;
	bool inRepair;
	int countOfFlats;
	double rent;

public: House(int, bool, bool, int,double);
		bool isNewHouse();
		bool isInRepair();
		double getRent();
		int getCountOfFlats();
		int getNumber();
		void setInRepair(bool);
		void setNewHouse(bool);
		void setRent(double);
};
