#include "dz9.h"

Property::Property()
{
	worth = 0.0;
}

Property::Property(double wth)
{
	worth = wth;
}

double Property::get_worth()
{
	return Property::worth;

}


Property::~Property()
{
}


Apartment::Apartment(double wth) :Property(wth)
{
}

double Apartment::tax()
{
	return Property::get_worth() / 1000;
}


Apartment::~Apartment()
{
}

Car::Car(double wth) :Property(wth)
{
}

double Car::tax()
{
	return Property::get_worth() / 200;
}

Car::~Car()
{
}

CountryHouse::CountryHouse(double wth) :Property(wth)
{
}

double CountryHouse::tax()
{
	return Property::get_worth() / 500;
}

CountryHouse::~CountryHouse()
{
}