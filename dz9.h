#ifndef DZ9_H
#define DZ9_H
#include <iostream>
using namespace std;
class Property
{
public:
	Property();
	Property(double wth);
	double get_worth();
	virtual double tax() = 0;
	~Property();
private:
	double worth;
};

class Apartment :public Property
{
private:
	double wth;
public:
	Apartment(double wth);
	double tax() override;
	~Apartment();
};

class Car :public Property
{
private:
	double wth;
public:
	Car(double wth);
	double tax() override;
	~Car();
};

class CountryHouse :public Property
{
private:
	double wth;
public:
	CountryHouse(double wth);
	double tax() override;
	~CountryHouse();
};



#endif