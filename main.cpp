#include <iostream>
#include "Street.h"
#include "House.h"
#include <list>
#include "exceptions.h"
#include <exception>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::exception;


int main()
{

	setlocale(0, "");
	
	Street street("newstreet", true, true);
	
	int n = 0;

	int number, countOfFlats;
	bool newHouse, inRepair;
	double rent;

	cout<<"Введите количество домов"<<endl;
	cin>>n;
	try {
		if (n<0){ throw NegativeNumber();}
	

	for (int i = 0; i < n; i++) {

		cout<<"номер дома "<<endl;
		cin >> number;
		cout<<"новый? "<<endl;
		cin >> newHouse;
		cout << "на ремонте? "<<endl;
		cin >> inRepair;
		cout << "количество квартир "<<endl;
		cin >> countOfFlats;
		cout << "квартплата "<<endl;
		cin >> rent;
		House house(number,newHouse,inRepair,countOfFlats,rent);
		street.add(house);

	}
	double result=street.calcFullRent();
	cout<<result;
	}
	catch(std::exception &ex){
		cout<<ex.what();}
	system("pause");
	return 0;
}
