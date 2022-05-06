#include "dz9.h"

int main() {
	Property* P[7];
	P[0] = new Apartment(30000);
	P[1] = new Apartment(70000);
	P[2] = new Apartment(44000);
	P[3] = new Car(89000);
	P[4] = new Car(5000);
	P[5] = new CountryHouse(35000);
	P[6] = new CountryHouse(73000);
	for (int i = 0; i < 7; i++) {
		cout << "TAX = " << P[i]->tax() << " rub\n";
		delete P[i];
	}
	//Property Pr(22000);
	//cout << Pr.tax();
}